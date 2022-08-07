//code_author:jeevansh
#include<bits/stdc++.h>
#define ll long long
using namespace std;
void palindrome_check(string str){
	map<char,string> mapper;
	for(char x:str){
		if(mapper.count(x))
			mapper[x]+=x;
		else mapper[x]=x;
	}
	string f="",l="",oddstr="";
	for(auto m:mapper){
		if(m.second.length()%2==1 && oddstr!=""){
			cout<<"NO SOLUTION";
			return ;
		}
		else if(m.second.length()%2==1)
			oddstr=m.second;
		else{
			f = m.second.substr(0,m.second.length()/2)+f;
			l += m.second.substr(0,m.second.length()/2);
		}
	}
	cout<<l+oddstr+f;
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
	palindrome_check(s);
	return 0;
}


