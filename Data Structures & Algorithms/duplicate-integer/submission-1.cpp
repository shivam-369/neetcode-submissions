class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    // sort(nums.begin(), nums.end());

    // for(int i = 1; i < nums.size(); i++){

    //     if(nums[i] == nums[i - 1]){
    //         return true;
    //     }
    // }
    // return false;   

     unordered_set <int> present;

    for(int i = 0; i < nums.size(); i++){
        if(present.find(nums[i]) != present.end()){
            return true;
        }else{
            present.insert(nums[i]);
        }
    }
    return false;
    }
};