//code_author:jeevansh
#include<bits/stdc++.h>
#define ll unsigned long long
#define loop for(int i=0;i<n-1;i++)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    ll sum=0,arr_ele=0;
    for(int i=0;i<n-1;i++){
        cin>>arr_ele;
        sum+=arr_ele;
    }
    cout<<(n*(n+1))/2-sum<<"\n";
    return 0;
}
