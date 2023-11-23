#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int n,i,nb,A=0;
    int T[10];
    printf("Saisir la taille du tableau:");
    scanf("%d",&n);
    printf("Saisir les nombres dans le tableau:");
    for (i=0;i<n;i++)
    {

        do
        {
        scanf("%d",&T[i]);
        }
        while(T[i]<0);
    }
    for(i=n-1;i>=0;i--)
    {
        A=A+((T[i]%10)*pow(10,i));
    }
    printf("%d",A);
    return 0;
}
