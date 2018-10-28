/* Chef has a sequence of positive integers A1,A2,…,AN. He has only one question for you: is it possible to change at most K elements of this sequence to arbitrary positive integers in such a way
that the condition holds ?
A^21+A^22+⋯+A^2N ≤ A1+A2+⋯+AN

Input :
-The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
-The first line of each test case contains two space-separated integers N and K.
-The second line contains N space-separated integers A1,A2,…,AN.

Output :
For each test case, print a single line containing the string "YES" if it is possible to satisfy the given condition or "NO" otherwise.

Constraints :
1≤ T ≤1000
1≤ K≤N ≤104
1≤ Ai ≤10 for each valid i
the sum of N over all test cases does not exceed 105

Example Input
1
2 2
1 2
Example Output
YES
Explanation
It is possible to change A2  to 1. This gives A=[1,1], for which the given condition holds, so the answer is "YES".
*/

Program in C++ -

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, k, cnt=0;
        cin>>n>>k;
        int arr[n];
        for (int i = 0; i < n; ++i)
         {
             cin>>arr[i];
             if(arr[i]!=1)
                cnt++;
         }
         if(cnt<=k)
         cout<<"YES\n";
         else
         cout<<"NO\n"; 
    }        
 return 0;
}
