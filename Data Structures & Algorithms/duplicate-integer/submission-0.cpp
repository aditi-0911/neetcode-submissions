class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> s;
        int i=0;
        int len=nums.size();
        while(len>0)
        {
            s.insert(nums[i]);
            i++;
            len--;
        }
        if(nums.size()==s.size())
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};