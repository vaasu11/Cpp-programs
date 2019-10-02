/*Input Format

You are given two strings, a and a, separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').

Output Format

In the first line print two space-separated integers, representing the length of a and b respectively.
In the second line print the string produced by concatenating a and b (a+b).
In the third line print two strings separated by a space, a' and b'. a' and b' are the same as a and b, respectively, except that their first characters are swapped.

Sample Input

abcd
ef
Sample Output

4 2
abcdef
ebcd af
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string s1,s2;
    cin>>s1>>s2;
    int len1=s1.size();
    int len2=s2.size();
    string s=s1+s2;
    cout<<len1<<" "<<len2<<endl;
    cout<<s<<endl;
    char s3=s1[0];
    s1[0]=s2[0];
    s2[0]=s3;
    cout<<s1<<" "<<s2;



    return 0;
}


