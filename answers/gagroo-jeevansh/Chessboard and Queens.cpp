//code_author:jeevansh
#include<bits/stdc++.h>
#define ll long long
#define loop for(int i=0;i<8;i++)
using namespace std;
void chessboard(vector<string> chess){
	int count=0;
	vector<int> col(8);
	iota(col.begin(),col.end(),0);
	do{
		bool check=true;
		loop{
			if(chess[i][col[i]] != '.'){
				check=false;
				break;
			}
		}
		vector<bool> diagstatus(15,false);
		loop{
			if(diagstatus[i+col[i]])
				check=false;
			diagstatus[i+col[i]]=true;
		}
		for(int i=0;i<15;i++)
			diagstatus[i]=false;
		loop{
			if(diagstatus[i+7-col[i]])
				check=false;
			diagstatus[i+7-col[i]]=true;
		}
		count+=check;
	}while(next_permutation(col.begin(),col.end()));
	cout<<count;
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<string> chessBoard(8);
	loop{
		cin>>chessBoard[i];
	}
	chessboard(chessBoard);
	return 0;
}
