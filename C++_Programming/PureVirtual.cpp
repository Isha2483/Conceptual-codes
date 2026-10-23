#include <iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        int Addition(int no1, int no2)
        {
            return no1 + no2;
        }

        virtual int Substraction(int no1, int no2) = 0;
};

class Derived
{
    public:
        int x;

};

int main()
{
    Base boj;        // ERROR
    Derived dobj;    // ERROR
    return 0;
};
