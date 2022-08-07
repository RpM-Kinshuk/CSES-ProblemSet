#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n; cin>>n;
    int a; cin>>a;
    vector <int> v;
    v.push_back(a);
    for(int i=1;i<n;i++)
    {
        cin>>a;
        auto temp = upper_bound(v.begin(),v.end(),a);
        if(temp==v.end())
        {
            v.push_back(a);
        }
        else if(*temp==a)
        {
            *(temp+1) = a;
        }
        else
        {
            *temp = a;
        }
        //for(auto e: v) cout<<e<<" "; cout<<"\n";
    }
    cout<<v.size()<<"\n";
    return 0;
}