int MOD =1e9+7;
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        vector<int>left(n);
        vector<int>right(n);
        stack<int>st;
        for (int i=0;i<n;i++){
            while(!st.empty() && arr[i]<arr[st.top()]){
                st.pop();
            }
            if (st.empty()){
                left[i]=i+1;
            }
            else{
                left[i]=i-st.top();
            }
            st.push(i);
        }
       while (!st.empty()) {
            st.pop();
        }
        for (int i=n-1;i>=0;i--){
            while (!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            if (st.empty()){
                right[i]=n-i;
            }
            else{
                right[i]=st.top()-i;
            }
            st.push(i);
        }
        long long result=0;
        for (int i=0;i<n;i++){
            result =(result + (long long)arr[i] * left[i] * right[i]) % MOD;
        }
    return result;
    }