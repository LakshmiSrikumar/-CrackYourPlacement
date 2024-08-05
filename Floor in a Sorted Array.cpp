//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> &v, long long n, long long x) {

        long long low =0;
        long long high = n-1;
        if (x < v[low]) return -1;
        while (low <=high){
            long long mid = (low + high ) / 2;
            if (v[mid]== x) return mid;
            else if ( v[mid] > x) high= mid-1;
            else  low= mid+1;
        }
        return high;
    }
};



