#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 3
#define MAX_STRLEN 30

struct s_studenti{
    char nome [MAX_STRLEN];
    char cognome[MAX_STRLEN];
    unsigned int eta;
    char classe[MAX_STRLEN];
}stud[N];

int main(int argc, char** argv) {
    int i;
    for(i=0;i<N;i++){
        printf("NOME: ");
        scanf("%s",stud[i].nome);
        printf("COGNOME: ");
        scanf("%s",stud[i].cognome);
        printf("ETA': ");
        scanf("%d",& stud[i].eta);
        printf("CLASSE: ");
        scanf("%s",stud[i].classe);
         }
        
    for(i=0;i<N;i++){
        printf("%s; %s; %d; %s;\n",stud[i].nome,stud[i].cognome, stud[i].eta,stud[i].classe);
    }
    
    return (EXIT_SUCCESS);
}

