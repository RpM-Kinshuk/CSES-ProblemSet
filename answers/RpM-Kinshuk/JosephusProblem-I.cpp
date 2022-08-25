#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    vector<int> v,carry;
    int k=0;
    while(k++<n) v.push_back(k);
    k=2;
    while(v.size()>1)
    {
        for(int i=0;i<v.size();i++)
        {   
            if(i&1)
            cout<<v[i]<<" ";
            else
            carry.push_back(v[i]);
        }
        if(v.size()%2==0)
        {
            v = carry;
            carry.clear();
        }
        else
        {
            int st = carry.back();
            carry.pop_back();
            v.clear();
            v.push_back(st);
            for(int z: carry)
            {
                v.push_back(z);
            }
            carry.clear();
        }
    }
    cout<<v[0];
    return 0;
}