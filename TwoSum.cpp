class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            int diff= target - nums[i];
            if(mp.find(diff)!=mp.end()){
                return {mp[diff],i};
            }
        mp[nums[i]]=i;
        }
    return {};
    }
};

/*     

        OR


    int n=nums.size();
        vector<int>ans;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if (nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
        }
        return ans; */