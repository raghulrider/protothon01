/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int func;
    float ans,num1,num2;
    printf("Enter the first number:\n");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    printf("Enter the function to be done:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    scanf("%d", &func);

    switch(func)
    {
        case 1:
        ans =  num1+num2;
        printf("The anwser is:");
        printf("%f", ans);
        break;
        case 2:
        ans =  num1-num2;
        printf("The anwser is:");
        printf("%f", ans);
        break;
        case 3:
        ans =  num1*num2;
        printf("The anwser is:");
        printf("%f", ans);
        break;
        case 4:
        if(num2==0)
        {
        printf("Check the input values, answer is infinite :(");
        }
        else
        {
        ans =  num1/num2;
        printf("The anwser is:");
        printf("%f", ans);
        }
       
        break;
    }
    
    

    return 0;
}