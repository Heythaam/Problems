#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int n,t,permut,i;
    char T[50],aux;
    printf("Saisir les nombres d eleves et le temps:");
    scanf("%d %d",&n,&t);
    printf("Saisir la queue: ");
    scanf("%s",T);
    while (t--)
    {
    for(i=1;i<n;i++)
    {
        if (T[i-1]=='B' && T[i]=='G')
        {
            T[i]='B';
            T[i-1]='G';
            i++;
        }
    }
    }


    printf("%s",T);
    return 0;
}
