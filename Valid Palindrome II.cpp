class Solution {
public:

    bool palindrome(string &s , int i,int j){
        while (i<j){
        if (s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
    }
    bool validPalindrome(string s) {
        int n=s.size();
        int left = 0;
        int right=n-1;
        while (left<right){
            if (s[left]!=s[right]) {
                return palindrome(s,left+1,right) || palindrome(s,left,right-1);
            }
            left++;
            right--;
        }
        return true;;
    }
};