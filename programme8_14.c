// draw the pattern
#include<stdio.h>
int main()
{
    int i,j,n=6;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((j==0)||(i==j)||(i==n-1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}