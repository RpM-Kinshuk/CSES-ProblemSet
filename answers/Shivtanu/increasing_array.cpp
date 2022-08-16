#include <iostream>

using namespace std;

int main()
{
    long long int n,diff=0, moves=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1]){
            diff=arr[i-1]-arr[i];
            moves+=diff;
            arr[i]=arr[i-1];
        }
        else{
            continue;
        }
    }
    cout<<moves;
    
    return 0;
}