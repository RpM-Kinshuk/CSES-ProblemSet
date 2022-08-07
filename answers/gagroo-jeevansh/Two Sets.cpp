//code_author:jeevansh
s#include<bits/stdc++.h>
#define ll long long
#define loop for(int i=1;i<=n;i++)
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	ll n;
	cin>>n;
	ll sum=n*(n+1)/2;
    if(sum&1)
        cout << "NO";
    else{
    	cout<<"YES\n";
        vector<ll> v1,v2;
        sum/=2LL;
        while(n){
            if(sum-n>=0){
               v1.push_back(n);
               sum-=n;
            }
            else v2.push_back(n);
            n--;
        }
        cout<<v1.size()<<"\n";
        for(ll ele:v1)
            cout<<ele<<" ";
        cout<<"\n";
        cout<<v2.size()<<"\n";
        for(ll ele:v2)
           cout<<ele<<" ";
   }
	return 0;
}
