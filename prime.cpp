#include <iostream>
using namespace std;

int main()
{
    int n, p, divisor;
    cin>>n;
    for(int p=2; p<=n; p++)
    {
        for(divisor=2;divisor<p;divisor++)
        {
            int rem = p%divisor;
            if(rem==0)
                break;
        }
        if(divisor==p)
            cout<<p << ' ';
    }
    cout << endl;
}

