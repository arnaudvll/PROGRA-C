struct couleurs {                
    char rouge; 

    char vert;

    char bleu;

    char alpha;

    struct couleurs *suivant;

};

struct liste_couleurs {
    struct couleurs *premier;
};            

void insertion (struct couleurs *, struct liste_couleurs *);                
void parcours (struct liste_couleurs *);
