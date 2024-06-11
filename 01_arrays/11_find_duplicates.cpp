class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int> s;
        for(int i = 0 ; i < nums.size();i++){
            if(s.find(nums[i])!= s.end()){ // checks if nums[i] is found in the set. If it is, this means nums[i] is a duplicate, so the function returns nums[i]
                return nums[i];
            }
           
           s.insert(nums[i]);//If nums[i] is not found in the set, it is inserted into the set for future duplicate checks.
        }
    return 1;
    }
};
