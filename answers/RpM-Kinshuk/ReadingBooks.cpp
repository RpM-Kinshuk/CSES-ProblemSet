#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    /*#ifndef ONLNE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/
    
    long long a=0,sum=0,n=0; cin>>n;
    vector <long long> v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
        sum+=v[i];
        a = max(v[i],a);
    }
    long long exsum = sum-a;
    if(exsum<a) cout<<2*a;
    else cout<<sum;
    return 0;
}