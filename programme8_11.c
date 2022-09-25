//draw the pattern 
#include<stdio.h>
int main()
{
    int i,j,count;
    for(i=1;i<5;i++)
    {
        count='A';
        for(j=1;j<=7;j++)
        {
            if(j>=5-i && j<=3+i)
            {
                printf("%c",count);
                j<4?count++:count--;
            }
            else
                printf(" ");
        }
         printf("\n");   
    }    
        return 0;
}