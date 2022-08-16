#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    long long i,t; cin>>t; i=t;
    vector <pair<long long,long long>> v;
    while(i--)
    {
        long long a,b; cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());
    long long ti=0, rew=0;
    for(i=0;i<t;i++)
    {
        ti+=v[i].first;
        rew += (v[i].second-ti);
    }
    cout<<rew;
    return 0;
}