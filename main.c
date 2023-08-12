#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    int i=2,w,test=0,sum=0,j;
            scanf("%d",&w);
    while (i<w && test == 0)
    {
        j=w-1;
        while (j-- && test == 0)
        {
            sum=i+j;
            if (sum== w && j % 2 == 0 && i % 2 == 0)
            {
                test=1;
            }
            else{
                test=0;
            }
        }
        i+=2;
    }
    if (test==0)
    {
        printf("NO");
    }
    else{
        printf("YES");
    }
}
