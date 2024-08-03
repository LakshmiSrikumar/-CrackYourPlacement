class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         unordered_map<string,vector<string>>mp;
         for (auto word : strs){
            string sorted= word;
            sort(sorted.begin(),sorted.end());
            mp[sorted].push_back(word);
        }
        vector<vector<string>>output;
        for (auto pair : mp){
            output.push_back(pair.second);
        }
        return output;
    }
};