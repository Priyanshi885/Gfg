class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n=arr.size();
        vector<int>temp(n);
        d=d%n;
        for(int i=0; i<n; i++){
            temp[(i-d+n)%n]=arr[i];
        }
        arr=temp;
    }
};