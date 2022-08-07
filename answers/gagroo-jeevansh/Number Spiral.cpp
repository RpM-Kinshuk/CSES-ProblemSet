//code_author:jeevansh
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	ll row,column;
	while(t--){
		cin>>row>>column;
		if(row>=column){
			if((row&1)==0) 
				cout<<(row*row)-column+1<<"\n";
			else cout<<(row-1)*(row-1)+column<<"\n";
		}
		else{
			if((column&1)==1) 
				cout<<(column*column)-row+1<<"\n";
			else cout<<(column-1)*(column-1)+row<<"\n";
		}
	}
	return 0;
}
