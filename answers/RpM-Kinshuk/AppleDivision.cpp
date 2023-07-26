#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mxn = 2e5;
									//#define Kin

int a[mxn];

int findminans(int *arr,int currsum,int totalsum,int i){
    if (i==0)
        return abs((totalsum-currsum) - currsum);

        return min(findminans(arr,currsum+arr[i],totalsum,i-1),findminans(arr,currsum,totalsum,i-1));

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    #ifdef Kin
    (void)!freopen("input.txt","r",stdin);
    (void)!freopen("output.txt","w",stdout);
    #endif
	
	int n;
    cin>>n;
    int *arr=new int[n];
    int totalsum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        totalsum+=arr[i];
    }

    cout<<findminans(arr,0,totalsum,n-1)<<endl;
    return 0;
}