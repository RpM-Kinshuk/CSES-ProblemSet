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
	ll n;
	cin>>n;
	ll counter= 0;
 
	for(int i=5;n/i>=1;i*=5)
		counter+=n/i;
	cout<<counter;
	
	return 0;
}
