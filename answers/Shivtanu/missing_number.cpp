#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    int arr[n], sum=0;
    for(int i=0; i<n-1; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int total=(n*(n+1))/2;
    cout<<total-sum;
    
  
    return 0;
}