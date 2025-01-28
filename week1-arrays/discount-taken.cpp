#include <bits/stdc++.h>
using namespace std;
// from arrays medium section
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        int a[n];
        int totdisc = 0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(y <= a[i])
            {
                totdisc += y;
            }
            else{
                totdisc += a[i];
            }
        }
        
        if(totdisc > x)
        {
            cout<<"COUPON"<<endl;
        }
        else{
            cout<<"NO COUPON"<<endl;
        }
    }
    return 0;
}
