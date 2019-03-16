#include<stdio.h>
int main()
{
    int i,j,k,value,rows;
    printf("Enter the number of rows:");
    scanf("%d",&rows);
    for(i=0;i<rows;i++)
    {
        for(j=1;j<=rows-i;j++)
        {
            printf("  ");
        }
        for(k=0;k<=i;k++)
        {
            if(i==0 || k==0)
            {
                value = 1;
            }
            else
            {
                value = value*(i-k+1)/k;
            }
            //printf("  "); //Uncomment this print line if you want clear answer for large number of rows and remove 4 from next print line
            printf("%4d", value);
        }
        printf("  \n");
    }
    return(0);
}
