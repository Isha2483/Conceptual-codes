#include<stdio.h>

int main()
{
    int Value1=0, Value2=0, Ans=0;

    printf("Enter first number \n");
    scanf("%d", &Value1);

    printf("Enter second number \n");
    scanf("%d", &Value2);


    // Business Logic
    Ans = Value1+Value2;

    printf("Addition: %d\n",Ans);

    return 0;
}