class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int sum=0;
       int ans=0;
       unordered_map<int,int>mp;
       mp[sum]=1;
       for (auto it:nums){
            sum+=it;
            int complement=sum-k;
            if(mp.find(complement)!=mp.end()){
                ans+=mp[complement];
            }
            mp[sum]++;
       }
       return ans;
    }
};

/*     
        int cnt=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=i;j<n;j++)
            {
                sum+=nums[j];
                if(sum==k)
                {
                    cnt++;

                }
            }
        }
        return cnt;*/