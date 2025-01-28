#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int fir=0,sec=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i==0)
            {
                fir = a[i];
            }
            else{
                if(a[i]>fir)
                {
                    sec = fir;
                    fir = a[i];
                }
                else if(a[i] < fir)
                {
                    if(a[i] > sec)
                    {
                        sec = a[i];
                    }
                }
            }
            
        }
        // your code goes here
        cout<<fir+sec<<endl;
    }
}
