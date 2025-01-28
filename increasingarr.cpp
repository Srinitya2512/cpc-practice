#include<bits/stdc++.h>
using namespace std;

int main()
{
    using ll = long long;

    ll n;
    cin>>n;

    vector<ll> v;
    ll num;
    for(ll i=0;i<n;i++)
    {   
        cin>>num;
        v.push_back(num);
    }
    ll mini =0;
    for(ll i=1;i<n;i++)
    {
        if(v[i] < v[i-1])
        {
            mini += (v[i-1] - v[i]);
            v[i] = v[i-1];
        }
    }
    cout<<mini;
    return 0;
}