// Program in C++

#include <bits/stdc++.h>
using namespace std;

int chocolateFeast(int n, int c, int m)
 {
   int total,temp,mod;
   temp=n/c;
   total=temp;
   mod=0;
   while(temp>0)
   { 
       mod+=temp%m;
       temp=temp/m;
       total+=temp;
   }

total+=mod/m;

return total;
}

int main()
{ int t;
cin>>t;
while(t--)
{
  int n,c,m;
  cin>>n>>c>>m;
  int result= chocolateFeast(n,c,m);
  cout<<result<<"\n";
}

return 0;
}
