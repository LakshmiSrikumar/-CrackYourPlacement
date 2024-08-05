bool permute(vector<int>&a, vector<int>&b, int n, int k)
{
    // Sort the array a[] in increasing order.
    sort(a.begin(),a.end());

    // Sort the array b[] in decreasing order.
    sort(b.begin(), b.end(), greater<int>());

    // Checking condition on each index.
    for (int i = 0; i < n; i++)
        if (a[i] + b[i] < k)
            return false;

    return true;
}