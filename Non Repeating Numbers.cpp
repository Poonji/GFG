class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        unordered_map<int,int>count;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
            count[nums[i]]++;
             for(int i=0;i<nums.size();i++)
            if(count[nums[i]]==1)
                ans.push_back(nums[i]);
            sort(ans.begin(),ans.end());
            return ans;
    }
};
