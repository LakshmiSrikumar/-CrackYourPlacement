class Solution {
public:
    int strStr(string haystack, string needle) {
        int n= needle.size();
        int h = haystack.size();
        if (n==0) return 0;
        if (n > h ) return -1;
        for(int i=0;i<=h-n;i++){
            int j=0;
            while (j<n && haystack[i+j]==needle[j]) j++;
            if (j==n) return i;
           
        }
         return -1;
    }
};