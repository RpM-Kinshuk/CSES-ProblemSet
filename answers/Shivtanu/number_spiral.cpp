#include <iostream>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    long long int x, y;
    while(t--){
        cin>>x>>y;
        if(x<y){
            if(y%2!=0){
                cout<<(y*y)-x+1;
            }
            else{
                cout<<((y-1)*(y-1)+1)+x-1;
            }
        }
        else{
            if(x%2==0){
                cout<<(x*x)-y+1;
            }
            else{
                cout<<((x-1)*(x-1)+1)+y-1;
            }
        }
        cout<<endl;
    }
    return 0;
}