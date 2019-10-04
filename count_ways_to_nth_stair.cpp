/*There are N stairs, and a person standing at the bottom wants to reach the top. The person can climb either 1 stair or 2 stairs at a time. Count the number of ways, the person can reach the top (order does not matter).
Note: Order does not matter means for n=4 {1 2 1},{2 1 1},{1 1 2} are considered same.

Input:
The first line contains an integer 'T' denoting the total number of test cases. In each test cases, an integer N will be given.

Output:
For each testcase, in a new line, print number of possible ways to reach Nth stair.

Constraints:
1 <= T <= 1000
1 <= N <= 106

Example:
Input:
2
4
5
Output:
3
3*/
{
#include<bits/stdc++.h>
using namespace std;
long long mod =1000000007;
long long countWays(int);
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int m;
        cin>>m;
        cout<<countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}
}
/*This is a function problem.You only need to complete the function given below*/
// function to count ways to reach mth stair
long long countWays(int m)
{
    return (m/2)+1;

}
