class Solution {
  public:
    bool arraySortedOrNot(vector<int>& arr) {
        int n= arr.size();
        for (int i=1;i<n;i++){
            if (arr[i-1] >arr[i]) return false;
        }
        return true;
    }
};