#include <iostream>

using namespace std;

class PPA
{
    public:
        int No1;
        int No2;


        // Default Constructor
        PPA()
        {
            cout<<"Inside Default constructor\n";
        }


        // Parametrised Constructor
        PPA(int a, int b)
        {
            cout<<"Inside Parametrised constructor\n";
        }

        ~PPA()
        {
            cout<<"Inside Destructor\n";
        }

};

int main()
{
    PPA pobj1;
    PPA pobj2(11,21);

    return 0;
}