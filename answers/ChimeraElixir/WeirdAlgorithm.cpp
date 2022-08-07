#include <iostream>
using namespace std;

int main() {
    long long int t;
    cin>>t;
    cout<<t<<' ';
    while (t!=1){
    
        if(t%2==0){
            t/=2;
            cout<<t<<' ';
        }
        else{
            t=3*t+1;
            cout<<t<<' ';
        }
        
    }
    cout<<endl;

}
