//draw the pattern
#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<6;i++)
    {
        for(j=0;j<10;j++)
        {
            if((i<=j)&&(j<=8-i))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}