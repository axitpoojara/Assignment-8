//draw the pattern
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<6;i++)
    {
        k=64;
        for(j=1;j<=7;j++)
        {
            j<=4?k++:k--;
            if((( i>=1)&&(j<=5-i))||((3+i<=j)&&(j<=7)))
                {printf("%c",k);
                }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}