//code_author:jeevansh
#include<bits/stdc++.h>
#define ll unsigned long long
#define loop for(int i=1;i<str.length();i++)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int base_count=1,new_count=1;
    string str;
    cin>>str;
    loop{
        if(str[i]==str[i-1]){
            ++base_count;
            new_count=max(base_count,new_count);    
        }
        else if(str[i]!=str[i-1]){
            new_count=max(base_count,new_count);
            base_count=1;
        }
    }
    cout<<new_count;
    return 0;
}
// ATTCGGGA
