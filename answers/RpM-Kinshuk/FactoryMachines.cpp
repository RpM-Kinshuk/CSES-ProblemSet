#include<bits/stdc++.h>
using namespace std;

const int mxN = 2e6;
int arr[mxN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,t; cin>>n; cin>>t;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    long long lt=0,ht=1e18;
    while(lt<ht)
    {
        long long acc=0,mid=(lt+ht)/2;
        for(int i=0;i<n;i++)
            if(acc>t) break;
            else acc += min((mid/arr[i]),(long long)1e9);
        if(acc>=t)
        {
            ht=mid;
        }
        else
        {
            lt=mid+1;
        }
    }
    cout<<lt;
    return 0;
}