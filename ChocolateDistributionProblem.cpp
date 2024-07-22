class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    long long mini=INT_MAX;
    long long diff=0;
    long long i=0;
    long long j=m-1;
    sort(a.begin(),a.end());
    while(j<n){
        diff=a[j]-a[i];
        mini=min(mini,diff);
        i++;
        j++;
    }
    return mini;
    }   
};