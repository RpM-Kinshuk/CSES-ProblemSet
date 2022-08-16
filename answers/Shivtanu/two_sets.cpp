#include <iostream>
#include<vector>
#define ll long long

using namespace std;

void display(vector<int> &x){
    for(auto i:x){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main()
{
    ll int n;
    cin>>n;
    vector<int> a, b;
    ll int sum=(n*(n+1))/2;
    if(sum%2==1){
        cout<<"NO";
        return 0;
    }
    else{
        ll int half=sum/2;
        for(int i=n; i>=1; i--){
            if(i<=half){
                a.push_back(i);
                half-=i;
            }
            else{
                b.push_back(i);
            }
        }
        
    }
    cout<<"YES"<<endl;
    cout<<a.size()<<endl;
    display(a);
    cout<<b.size()<<endl;
    display(b);

    return 0;
}