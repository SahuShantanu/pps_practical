#include<stdio.h>

int main()
{
    int i;

    printf("enter your number:\n");
    scanf("%d",&i);

    if (i%2==0)
    {
        printf("%d is a even number",i);

    }
    else
    {
        printf("%d is a odd number",i);
    }
    return 0;
}
