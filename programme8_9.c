//draw the pattern
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<5;i++)
    {
        k=1;
        for(j=1;j<10;j++)
        {
            if((i<=j)&&(j<=8-i))
               { printf("%d",k);
                j<4?k++:k--;
               }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}