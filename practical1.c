#include<stdio.h>

int main(){
    int i,num1,num2;

    printf("Enter 1 for Addition\n");
    printf("Enter 2 for Subtraction\n");
    printf("Enter 3 for Multiplication\n");
    printf("Enter 4 for Division\n");
    printf("Enter 5 for Modulo\n");
    printf("Enter 6 for Average\n");
    scanf("%d",&i);

    printf("Enter the value of num1\n");
    scanf("%d",&num1);
    printf("Enter the value of num2\n");
    scanf("%d",&num2);


    switch (i)
    {
        case 1:
        printf("Your Addition is %d",num1+num2);
        break;
        case 2:
        printf("Your Subtraction is %d",num1-num2);
        break;
        case 3:
        printf("Your Multiplication is %d",num1*num2);
        break;    
        case 4:
        printf("Your Division is %d",num1/num2);
        break;
        case 5:
        printf("Your Modulo is %d",num1%num2);
        break;
        case 6:
        printf("Your Average is %d",(num1+num2)/2);
        break;
    
    default:
        printf("don't teach me");
        break;
    }
    return 0;
}
