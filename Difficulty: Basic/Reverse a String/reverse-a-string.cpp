class Solution {
  public:
    string reverseString(string& s) {
        // code here
    stack<char>st;
    int n=s.size();
    
    for(int i=0; i<n; i++){
        st.push(s[i]);
    }
    
    string res;
    
    while(!st.empty()){
        char c=st.top();
        st.pop();
        res.push_back(c);
    }
    return res;
    }
};
