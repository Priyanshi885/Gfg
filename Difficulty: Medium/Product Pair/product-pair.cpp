// User function template for C++

class Solution {
  public:
    bool isProduct(vector<int> arr, long long x) {
        // code here
        sort(arr.begin(), arr.end());
        int n=arr.size();
        int start=0, end= n-1;
        while(start<end)
        {
            long long mul = 1LL * arr[start] * arr[end];
            if(mul == x)
            {
            return true;
            }
            else if(mul > x)
            end--;
            else
            start++;
        }
        return false;
    }
};