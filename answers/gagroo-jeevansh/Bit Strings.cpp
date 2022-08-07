//code_author:jeevansh
#include<bits/stdc++.h>
#define ll long long
#define loop for(int i=0;i<n;i++)
#define MOD 1000000007
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
	ll res=1;
	loop{
		res*=2;
		res%=MOD;
	}
	cout<<res;
	return 0;
}
