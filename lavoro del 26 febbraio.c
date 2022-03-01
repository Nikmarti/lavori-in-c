#include <stdio.h>
#include <stdlib.h>
#define N 5

int main()
{
    int i;
    char inserimento;
    char parola[N]="gallo";
    int indovinati[N];
    int completato;
    int trovato;
    int tentativi = 6;

    for(i=0; i<N; i++)
    {
        indovinati[i]=0;
    }
    do{
        printf("Ti rimangono %d vite\n",tentativi);
        for(i=0; i<N; i++)
        {
            if(indovinati[i]==0)
            {
                printf("_ ");
            }
            else
            {
                printf("%c",parola[i]);
            }
        }
        printf("\nInserisci una lettera: ");
        scanf(" %c", &inserimento);
        trovato=0;
        for(i=0; i<N; i++)
        {
            if(inserimento==parola[i])
            {
                trovato=1;
                indovinati[i]=1;
            }
        }
        if(trovato==1)
        {
            printf("E' corretto\n");
        }
        else
        {
            printf("Hai sbagliato\n");
            tentativi--;
        }
        completato=1;
        for(i=0; i<N; i++)
        {
            if(indovinati[i]==0)
            {
                completato=0;
            }
        }
    }while(completato==0 && tentativi>0);

    if(completato==1)
    {
        printf("Hai vinto, la parola e' %s\n",parola);
    }
    else
    {
        printf("Hai perso, la parola e' %s\n",parola);
    }

    return 0;
}



