/*
 * SPDX-FileCopyrightText: 2021 John Samuel
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */


// Lien https://koor.fr/C/cstdio/fflush.wp
// https://koor.fr/C/cstdio/fscanf.wp


#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>  
#include <sys/socket.h>
#include <netinet/in.h>
#include "client.h"
#include <math.h>


int envoie_operateur_numeros(char* data, char *message, int socketfd) {
  // Calcul écrit par le client stocké dans data et commence par "calcule :"
  strcat(data, message);
  
  // Envoi du message stocké dans data
  int write_status = write(socketfd, data, strlen(data));
  if ( write_status < 0 ) {
    perror("erreur ecriture");
    exit(EXIT_FAILURE);
  }
  return(0);
}

/* 
 * Fonction d'envoi et de réception de messages
 * Il faut un argument : l'identifiant de la socket
 */

int envoie_recois_message(int socketfd) {
 
  char data[1024];
  // la réinitialisation de l'ensemble des données
  memset(data, 0, sizeof(data));

  // Demandez à l'utilisateur d'entrer un message
  char message[100];
  fgets(message, 1024, stdin); // On récupère les informations de notre message dans la variable message.
  char code[10];
  sscanf(message, "%s", code);
  strcat(code, " :");

  // Si les données rentrant par le client commence par une opération :
  if (strcmp(code, "calcule :") == 0) {  
    envoie_operateur_numeros(data, message, socketfd); //on envoie l'opérateur et les numéros au serveur pour le calcul
  }

  // Sinon, pour les autres cas 
  else {
    // Message écrit par le client stocké dans data et commence par "message:"
    strcat(data, message);

    // Envoie du message stocké dans data
    int write_status = write(socketfd, data, strlen(data));
    if ( write_status < 0 ) {
      perror("erreur ecriture");
      exit(EXIT_FAILURE);
    }
    // la réinitialisation de l'ensemble des données
    memset(data, 0, sizeof(data));


    // lire les données de la socket
    // Réception du message envoyé par le serveur avec la donnée data
    int read_status = read(socketfd, data, sizeof(data));
    if ( read_status < 0 ) {
      perror("erreur lecture");
      return -1;
    }

    // Affichage du message reçu, envoyé par le serveur
    printf("Message recu: %s\n", data);
  } 
  return 0;
}



int main() {
  int socketfd;
  int bind_status;

  struct sockaddr_in server_addr, client_addr;

  /*
   * Creation d'une socket
   */
  socketfd = socket(AF_INET, SOCK_STREAM, 0);
  if ( socketfd < 0 ) {
    perror("socket");
    exit(EXIT_FAILURE);
  }

  //détails du serveur (adresse et port)
  memset(&server_addr, 0, sizeof(server_addr));
  server_addr.sin_family = AF_INET;
  server_addr.sin_port = htons(PORT);
  server_addr.sin_addr.s_addr = INADDR_ANY;

  //demande de connection au serveur
  int connect_status = connect(socketfd, (struct sockaddr *) &server_addr, sizeof(server_addr));
  if ( connect_status < 0 ) {
    perror("connection serveur");
    exit(EXIT_FAILURE);
  }

  // appeler la fonction pour envoyer un message au serveur
  envoie_recois_message(socketfd);

  close(socketfd);
}
