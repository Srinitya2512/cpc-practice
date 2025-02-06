class Solution {
public:
    int students(vector<int>& arr,int cap)
    {   
        int n = arr.size();
        int stu = 1;
        int books = 0;
        for(int i = 0; i < n;i++)
        {
            if(books + arr[i] <= cap)
            {
                books += arr[i];
            }
            else{
                stu+=1;
                books = arr[i];
            }
        }
        return stu;
    }


    int splitArray(vector<int>& arr, int k) {
        int n = arr.size();

        if(k > n)   return -1;

        int low = *max_element(arr.begin(),arr.end());
        int high = accumulate(arr.begin(),arr.end(),0);

        while(low <= high)
        {
            int mid = (low + high)/2;

            if(students(arr,mid) > k)
            {
                low = mid + 1;
            }
            else{
                high = mid -1;
            }
        }
        return low;
    }
};
