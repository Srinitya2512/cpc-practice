#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {   
        int cost = 0;
        int n,x;
        cin>>n>>x;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int j=0;j<n;j++)
        {
            cin>>b[j];
            if(a[j] >= x)
            {
                cost += b[j];
            }
        }
       
        cout<<cost<<endl;
    }
    return 0;
}