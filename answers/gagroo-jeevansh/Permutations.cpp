//code_author:jeevansh
#include<bits/stdc++.h>
#define ll long long
#define loop for(int i=1;i<=n;i++)
using namespace std;
void solution(ll n){
	string str="";
	if(n==1)
		cout<<1;
	else if(n<=3 && n!=1){
		cout<<"NO SOLUTION";
	}
	else{
		loop{
			if(i%2==0)
				cout<<i<<" ";
			else str+= to_string(i) + " ";
		}
		cout<<str;
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;
	cin>>n;
	solution(n);
	return 0;
}
