#include<stdio.h>
int main()
{
    int i,j,n=5;
    for(i=1;i<6;i++)
    {
        for(j=1;j<6;j++)
        {
            if((j==5)||(i==5)||(j==(6-i)))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}