#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int k=0,t=0,x=0; cin>>x>>t;
    set <int> lights;
    lights.insert(0); lights.insert(x);
    multiset <int> dist;
    dist.insert(x);
    while(t--)
    {
        cin>>k;
        lights.insert(k);
        set <int>::iterator it;
        it = lights.find(k);
        int pre = *prev(it);
        int nxt = *next(it);
        dist.erase(dist.find(nxt-pre));
        dist.insert(nxt-k);
        dist.insert(k-pre);
        cout<<*dist.rbegin()<<" ";
    }
    return 0;
}