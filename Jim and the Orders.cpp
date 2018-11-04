// Program in C++ -

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,first,second;
    cin>>n; //Input no. of customers
    vector<pair<int,int>>t;
    priority_queue<pair<int,int>>pq;
    for(int i=1; i<=n; i++)
    {
        cin>>first;
        cin>>second;
        int x =first +second;
        pq.push(make_pair(x,i));
    }
    while(!pq.empty())
    {
        t.push_back(pq.top());
        pq.pop();
    }
    sort(t.begin(),t.end());
    for(auto x=t.begin(); x<t.end(); x++)
        cout<<x->second<<" ";
    return 0;
}
