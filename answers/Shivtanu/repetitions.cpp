#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    long long int i, j, n=1, l=s.length();
    long long int count=1;
    for(i=0; i<l; i++){
        if(s[i]==s[i+1]){
            count++;
            if(count>=n){
                n=count;
            }
        }
        else{
            count=1;
            continue;
        }
    }
    cout<<n;

    return 0;
}