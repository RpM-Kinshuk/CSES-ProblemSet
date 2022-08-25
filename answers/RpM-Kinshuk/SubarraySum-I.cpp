#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    /*#ifndef ONLNE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/
    
    long long n=0,s,ct=0; cin>>n>>s;
    long i=0,j=1,tmp=0;
    vector <long> v(n);
    for(i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]==s) ct++;
    } i=0; if(n>1) tmp=v[0]+v[1];
    while(j<n&&i<n)
    {
        if(i==j)
        {
            tmp=v[i];
            tmp-=v[i++];
        }
        if(tmp==s)
        {
            ct++; 
            tmp+=v[++j];
        }
        else if(tmp<s)
        {
            tmp+=v[++j];
        }
        else
        {
            tmp-=v[i++];
        }
        /*cout<<"tmp is: "<<tmp<<endl;
        for(long st=i;st<=j;st++)
            cout<<v[st]<<" ";
        cout<<"\n";*/
    }
    cout<<ct;
    return 0;
}