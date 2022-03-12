#include<stdio.h>
#include<conio.h>
int main()
{   int num1,num2,result;
    printf("\nThis program is a Demonstration of Arithmetic operations in C langusge\n");
    printf("Enter num1 : ");
    scanf("%d",&num1);
    printf("Enter num2 : ");
    scanf("%d",&num2);
    result = num1+num2;
    printf("\nAddition : %d\n",result);
    result = num1-num2;
    printf("Subtraction : %d\n",result);
    result = num1*num2;
    printf("Multiplication : %d\n",result);
    result = num1/num2;
    printf("Division : %d\n",result);
    result = num1%num2;
    printf("Remainder : %d\n",result);
    result = num1++;
    printf("Increment : %d\n",result);
    result = num2--;
    printf("Decrement : %d\n",result);
    return 0; }