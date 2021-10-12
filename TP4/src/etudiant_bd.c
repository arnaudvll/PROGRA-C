#include <stdio.h> // en-têtes(headers)
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int ecrire_dans_fichier(char *nom_de_fichier, char *message);
int clear(void);

int main() {
    char nom_de_fichier[] = "etudiant.txt";
    char nom[20];
    char prenom[20];
    char adresse[40];
    char ville[20];
    char note_c[3];
    char note_sys[3];
    
    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d ", i);
        printf("Nom: ");
        scanf("%s", nom);
        clear();
        
        printf("Prenom: ");
        scanf("%s", prenom);
        clear();
        
        printf("adresse: ");
        scanf("%s", adresse);
        clear();
        
        printf("ville: ");
        scanf("%s", ville);
        clear();
        
        printf("note_c: ");
        scanf("%s", note_c);
        clear();
        
        printf("note_sys: ");
        scanf("%s", note_sys);
        clear();
        
        ecrire_dans_fichier(nom_de_fichier, nom);
        ecrire_dans_fichier(nom_de_fichier, ", ");
        ecrire_dans_fichier(nom_de_fichier, prenom);
        ecrire_dans_fichier(nom_de_fichier, ", ");
        ecrire_dans_fichier(nom_de_fichier, adresse);
        ecrire_dans_fichier(nom_de_fichier, ", ");
        ecrire_dans_fichier(nom_de_fichier, ville);
        ecrire_dans_fichier(nom_de_fichier, ", ");
        ecrire_dans_fichier(nom_de_fichier, note_c);
        ecrire_dans_fichier(nom_de_fichier, ", ");
        ecrire_dans_fichier(nom_de_fichier, note_sys);
        ecrire_dans_fichier(nom_de_fichier, "\n");
        
    }
    return(0);
}

int ecrire_dans_fichier(char *nom_de_fichier, char *message) {
    int fd, count, size;
    fd = open (nom_de_fichier, O_CREAT|O_WRONLY|O_APPEND, S_IRUSR|S_IWUSR); //ouverture du fichier
    size = write(fd, message, strlen(message)); //écriture dans le fichier
    close(fd); //fermeture du fichier
    return 0;
}

int clear(void) {
    while (getchar() != '\n');
}

