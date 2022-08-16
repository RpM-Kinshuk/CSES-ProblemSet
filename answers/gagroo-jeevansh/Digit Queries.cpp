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

	ll t;
	cin>>t;
	vector<ll> tenpower(19,1);
	for(int i=1;i<19;i++)
		tenpower[i]=tenpower[i-1]*10;
	while(t--){
		ll k;
		cin>>k;
		ll digit_now=0,digit_before=0;
		int total_digits=0;
		for(int i=1;i<=18;i++){
			digit_now+=(tenpower[i]-tenpower[i-1])*i;
			if(digit_now>=k){
				total_digits=i;
				break;
			}
			digit_before+=(tenpower[i]-tenpower[i-1])*i;
		}
		ll small=tenpower[total_digits-1];
		ll large=tenpower[total_digits]-1;
		ll bestvalue=0;ll start_bestvalue; 
		while(small<=large){
			ll actualvalue=(small+large)/2;
			ll start_actual=digit_before + 1 + (actualvalue-tenpower[total_digits-1]) * total_digits;
			if(start_actual<=k){
				if(actualvalue>bestvalue){
					bestvalue=actualvalue;
					start_bestvalue=start_actual;
				}
				small=actualvalue+1;
			}
			else {
				large=actualvalue-1;
			}
		}
		string numeric=to_string(bestvalue);
		cout<<numeric[k-start_bestvalue]<<"\n";
	}
	return 0;
}
