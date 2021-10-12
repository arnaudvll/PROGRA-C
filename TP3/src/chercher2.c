#include <stdio.h>
#include <stdlib.h> // bibliotheque du random
int main(){
    char * tabl[10]; // declaration de notre tableau  initial contenant 100 cases
    char * tabl2[10];
    int a=0;
    int b=0;
    int nmb_nous, nmb_eux;
    tabl[0]="yo";
    tabl[1]="wesh";
    tabl[2]="salut l'étudiant,";
    tabl[3]="bonjour";
    tabl[4]="yo";
    tabl[5]="wesh";
    tabl[6]="salut";
    tabl[7]="bonj#include <stdio.h>
#include <stdlib.h> // bibliotheque du random
int main(){
    char * tabl[10]; // declaration de notre tableau  initial contenant 100 cases
    char * tabl2[10];
    int a=0;
    int b=0;
    int nmb_nous, nmb_eux;
    tabl[0]="yo";
    tabl[1]="wesh";
    tabl[2]="salut l'étudiant,";
    tabl[3]="bonjour";
    tabl[4]="yo";
    tabl[5]="wesh";
    tabl[6]="salut";
    tabl[7]="bonjour";
    tabl[8]="wesh";
    tabl[9]="salut";    
    char * test ="salut l'étudiant,";
    for(nmb_nous=0;test[nmb_nous];nmb_nous++);
    
    for(int i=0;i<10;i++){
        for(nmb_eux=0;tabl[i][nmb_eux];nmb_eux++);
        if (nmb_eux == nmb_nous){
            tabl2[a]=tabl[i];
            a++;
            continue;
        }
    
    }
    
    for(int l=0;l<a;l++){
        for(int m=0;m<nmb_nous;m++){
            if(tabl2[l][m]==test[m]){
                if (m==nmb_nous-1){
                    b++;
                }
            }
        }
    }
    printf("\nil y a %i phrases\n",b); 
    
}our";
    tabl[8]="wesh";
    tabl[9]="salut";    
    char * test ="salut l'étudiant,";
    for(nmb_nous=0;test[nmb_nous];nmb_nous++);
    
    for(int i=0;i<10;i++){
        for(nmb_eux=0;tabl[i][nmb_eux];nmb_eux++);
        if (nmb_eux == nmb_nous){
            tabl2[a]=tabl[i];
            a++;
            continue;
        }
    
    }
    
    for(int l=0;l<a;l++){
        for(int m=0;m<nmb_nous;m++){
            if(tabl2[l][m]==test[m]){
                if (m==nmb_nous-1){
                    b++;
                }
            }
        }
    }
    printf("\nil y a %i phrases\n",b); 
    
}
