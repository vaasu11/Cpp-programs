/*You are given an integer input N and you have to find whether it is Anshuman’s favourite or not.

If it is then print “YES” else print “NO”.

A number is Anshuman’s favourite if it is either the sum or the difference of the integer 5. (5+5, 5+5+5, 5-5,5-5-5+5+5…..)

Input:
The first line of input contains an integer denoting the number of test cases . Next line of input contains an integer N to be tested.

Output:
For each test case , the output is in a new line containg the answer 'YES' or 'NO' depending on whether the given number N is Anshuman's favourite or not .*/

#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int x;
	    cin>>x;
	    if(x%5==0)
	        cout<<"YES";
	    else
	        cout<<"NO";
	    cout<<endl;
	}
	return 0;
}
