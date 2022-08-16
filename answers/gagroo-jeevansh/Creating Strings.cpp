//code_author:jeevansh
#include<bits/stdc++.h>
#define ll long long
using namespace std;
void create_string(string str){
	sort(str.begin(),str.end());
	vector<string> v1;
	do{
		v1.push_back(str);
	}while(next_permutation(str.begin(),str.end()));
	cout<<v1.size()<<"\n";
	for(string str2:v1)
		cout<<str2<<"\n";
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	cin>>s;
	int len=s.size();
	create_string(s);
	return 0;
}
