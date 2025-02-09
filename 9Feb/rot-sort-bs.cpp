#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int search(vector<int>& arr, int tar) {
            int n = arr.size();
    
            int low=0,high=n-1;
    
            while(low <= high)
            {
                int mid = low + (high-low)/2;
    
                if(arr[mid] == tar)
                {
                    return mid;
                }
                if(arr[mid] >= arr[low])
                {
                    if (arr[low] <= tar && tar <= arr[mid]) 
                    {                    
                        high = mid - 1;
                    }
                    else {
                    
                        low = mid + 1;
                    }
                }
                else{
                    if(arr[mid] <= tar && tar <=arr[high])
                    {
                        low = mid+1;
                    }
                    else{
                        high = mid-1;
                    }
                }
            }
            return -1;
        }
    };