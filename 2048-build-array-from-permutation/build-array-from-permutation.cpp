class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
         int a =nums.size();
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=nums[i]+(((nums[nums[i]])%a)*a);
        }
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=nums[i]/a;
        }
        return nums;
    }
    
};