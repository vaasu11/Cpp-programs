#include <iostream>
using namespace std;

int main()
{
    int a =10, b = 20;

    bool greater = (a>b);
    bool lesser = (a<b);
    
    cout << greater << endl;
    cout << lesser << endl;

    if(a>b)
    {
        cout << "a is greater than b" << endl;
    }
    else
    {
        cout << "a is not greater than b" << endl;
    }
}

