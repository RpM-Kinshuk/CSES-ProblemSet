//code_author:jeevansh
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	ll t,a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		if((2*a-b)>=0 && (2*a-b)%3==0 && (2*b-a)>=0 && (2*b-a)%3==0)
			cout<<"YES\n";
		else cout<<"NO\n";	
	}
}