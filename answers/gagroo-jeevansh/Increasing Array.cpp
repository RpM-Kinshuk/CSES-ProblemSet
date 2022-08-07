//code_author:jeevansh
#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
using namespace std;
void solution(ll arr[],ll n){
	ll count=0;
	loop{
		if(arr[i]>arr[i+1]){
			count+=abs(arr[i]-arr[i+1]);
			arr[i+1]=arr[i];
		}
	}
	cout<<count;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;
	cin>>n;
	ll arr[n];
	loop{
		cin>>arr[i];
	}
	solution(arr,n);
	return 0;
}
 

