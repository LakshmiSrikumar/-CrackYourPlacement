class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n= nums.size();
        vector<int>ans;
        sort(nums.begin(),nums.end());
        for (int i=0;i<n-1;i++){
            if (nums[i]==nums[i+1]){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};
/*

OR

     int n=nums.size();
        vector<int>ans;
        unordered_map<int,int>mp;
        for (int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for (auto x : mp){
            if (x.second>1) ans.push_back(x.first);
        }
        return ans;  */