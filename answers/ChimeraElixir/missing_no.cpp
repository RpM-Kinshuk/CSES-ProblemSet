#include <iostream>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int n,sum=0,total=0;
    cin>>n;
    n=n-1;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    for (int i=0;i<n;i++){
        sum+=arr[i];
    }
    
    for (int i=1;i<=n+1;i++){
        total+=i;
    }

    cout<<total-sum<<endl;

    return 0;
}
