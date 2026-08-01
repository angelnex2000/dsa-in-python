class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> count;

        //count frequencies

        for (int num : nums){
            count[num]++;
        }

        //create buckets

        vector<vector<int>> buckets(nums.size() +1);

        for(auto it : count){
            buckets[it.second].push_back(it.first);
        }

        vector<int> ans;

        // traverse buckets from highest frequency
        for(int i  = buckets.size() -1; i >=0; i--){
            for(int num : buckets[i]) {
                ans.push_back(num);

                if(ans.size()  == k)
                    return ans;
            }
        }
        
        return ans;
    }
};