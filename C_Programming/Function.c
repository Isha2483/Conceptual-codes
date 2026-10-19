#include <stdio.h>

int Addition(int value1, int value2)
{
    int Result =0;
    Result = value1+value2;
    return Result;
}

int main()
{
    int NO1=10;
    int NO2=11;
    int Ans=0;

    Ans = Addition(NO1, NO2);
    printf("Addition is %d\n", Ans);

    return 0;
}