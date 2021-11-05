/*
 * SPDX-FileCopyrightText: 2021 John Samuel
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

#include <sys/types.h> 
#include <sys/socket.h>
#include <sys/epoll.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include "serveur.h"

/* renvoyer un message (*data) au client (client_socket_fd)
 */
int renvoie_message(int client_socket_fd, char *data) {
  int data_size = write (client_socket_fd, (void *) data, strlen(data));
      
  if (data_size < 0) {
    perror("erreur ecriture");
    return(EXIT_FAILURE);
  }
  return(0);
}


 
float recois_numeros_calcule(char *data){
  char code[10];
  char op [3];
  float num1 ;
  float num2;
  sscanf(data, "%s %*s %s %f %f", code, op, &num1, &num2); //extrait de data les informations voulues
  float calc;
  
  switch ( op[0] ) {
        case '+' : calc = num1+num2;
        break;
        
        case '-' : calc = num1-num2; 
        break;

        case '*' : calc = num1*num2; 
        break;

        case '/' : calc = num1/num2; 
        break;
  }
  return calc;
}


/* accepter la nouvelle connection d'un client et lire les données
 * envoyées par le client. En suite, le serveur envoie un message
 * en retour
 */
int recois_envoie_message(int socketfd) {
  struct sockaddr_in client_addr;
  char data[1024];

  int client_addr_len = sizeof(client_addr);
 
  // nouvelle connection de client
  int client_socket_fd = accept(socketfd, (struct sockaddr *) &client_addr, &client_addr_len);
  if (client_socket_fd < 0 ) {
    perror("accept");
    return(EXIT_FAILURE);
  }

  // la réinitialisation de l'ensemble des données
  memset(data, 0, sizeof(data));

  //lecture de données envoyées par un client
  int data_size = read (client_socket_fd, (void *) data, sizeof(data));
      
  if (data_size < 0) {
    perror("erreur lecture");
    return(EXIT_FAILURE);
  }
  
  /*
   * extraire le code des données envoyées par le client. 
   * Les données envoyées par le client peuvent commencer par le mot "message :" ou un autre mot.
   */

  // Reception du meesage et affichage du message reçu
  printf ("Message recu: %s\n", data);
  char code[10];
  sscanf(data, "%s", code);
  strcat(code, " :");

  //Si le message commence par le mot: 'message:' 
  //Renvoie le message stocké dans data vers le client
  if (strcmp(code, "message :") == 0) {

    // On créer une chaîne de caractère pour le message du serveur
    char message_retour[100];
    printf("Veuillez saisir un message pour le client: (max 100 caracteres): ");

    fgets(message_retour, 100, stdin); // On met le "%" pour bien prendre en compte une phrase, sinon le message retourné n'est que le premier mot de la phrase.
    renvoie_message(client_socket_fd, message_retour);

  }

  //Si le message commence par le mot: 'calcule:' 
  if (strcmp(code, "calcule :") == 0) {           
    float res;
    res = recois_numeros_calcule(data); //on effectue le calcul et on stocke le résultat
    printf("calcule : %.2f", res); //on affiche le résultat coté serveur avec 2 décimales
  }

  close(socketfd);
}

int main() {

  int socketfd;
  int bind_status;
  int client_addr_len;

  struct sockaddr_in server_addr, client_addr;

  /*
   * Creation d'une socket
   */
  socketfd = socket(AF_INET, SOCK_STREAM, 0);
  if ( socketfd < 0 ) {
    perror("Unable to open a socket");
    return -1;
  }

  int option = 1;
  setsockopt(socketfd, SOL_SOCKET, SO_REUSEADDR, &option, sizeof(option));

  //détails du serveur (adresse et port)
  memset(&server_addr, 0, sizeof(server_addr));
  server_addr.sin_family = AF_INET;
  server_addr.sin_port = htons(PORT);
  server_addr.sin_addr.s_addr = INADDR_ANY;

  // Relier l'adresse à la socket
  bind_status = bind(socketfd, (struct sockaddr *) &server_addr, sizeof(server_addr));
  if (bind_status < 0 ) {
    perror("bind");
    return(EXIT_FAILURE);
  }
 
  // Écouter les messages envoyés par le client
  listen(socketfd, 10);

  //Lire et répondre au client
  recois_envoie_message(socketfd);

  return 0;
}


