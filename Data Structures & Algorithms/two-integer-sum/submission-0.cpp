class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numSet;
        vector <int> answer(2);
        for(int i = 0; i < nums.size(); i++){

            if(numSet.find(target - nums[i]) != numSet.end()){

                answer[1] = i;
                answer[0] = numSet[target - nums[i]];
                return answer;
            }else{
                numSet[nums[i]] = i;
            }

        }
        return answer;
    }
};
