/* Lena is preparing for an important coding competition that is preceded by a number of sequential preliminary contests. She believes in "saving luck", and wants to check her theory. Each contest is described by two integers L[i] and T[i]:
-L[i] is the amount of luck associated with a contest. If Lena wins the contest, her luck balance willdecrease by L[i], if she loses it, her luck balance will increase by L[i].
-T[i] denotes the contest's importance rating. It's equal to 1 if the contest is important and it's equal to 0 if it's unimportant.
If Lena loses no more than K important contests, what is the maximum amount of luck she can have after competing in all the preliminary contests? This value may be negative.
For example K=2 :
Contest L[i] T[i]
      1   5 1
      2   1 1
      3   4 0
If Lena loses all of the contests, her will be 5+1+4=10 . Since she is allowed to lose 2 important contests, and there are only 2 important contests. She can lose all three contests to maximize her luck at 10. If K=1, she has to win at least of the important contests. She would choose to win the lowest
value important contest worth 1. Her final luck will be 5+4-1=8 .
Input Format:
The first line contains two space-separated integers n and K, the number of preliminary contests and the
maximum number of important contests Lena can lose.
Each of the next n lines contains two space-separated integers, L[i] and T[i] the contest's luck balance
and its importance rating.

Output Format :
Print a single integer denoting the maximum amount of luck Lena can have after all the contests.

Sample Input-
6 3
5 1
2 1
1 1
8 1
10 0
5 0

Sample Output-
29
*/
Program in C++ -

  #include <bits/stdc++.h>
using namespace std;
// Complete the luckBalance function below.
int luckBalance(int k, priority_queue<pair<long int,long  int>> pq)
{  long  sum=0;
  pair<long int, long int> top;
   while (!pq.empty()) 
   {
     top = pq.top();
     if (top.second == 0) {

       sum = sum + top.first;
       pq.pop();
    } 
    else  if(k>0 && top.second==1)
    {  
      sum = sum + top.first;
      pq.pop();
      k--;
    }
  else 
  {
    sum = sum - top.first;
      pq.pop();  
  }

   }

return sum;
}
int main()
{   long int n,k,first,second;
    cin>>n>>k;
priority_queue<pair<long int,long int>>pq;
for(int i=0;i<n;i++)
{  cin>>first>>second;
    pq.push(make_pair(first,second));
}

long int result =luckBalance(k,pq);
cout<<result;
    return 0;
}
