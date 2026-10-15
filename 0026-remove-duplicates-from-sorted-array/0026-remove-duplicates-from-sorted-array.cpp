
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> temp;

        for (int i = 0; i < nums.size(); i++) {
            bool found = false;

            for (int j = 0; j < temp.size(); j++) {
                if (nums[i] == temp[j]) {
                    found = true; 
                    break;
                }
            }

            if (!found) {
                temp.push_back(nums[i]);
            }
        }

        for (int i = 0; i < temp.size(); i++) {
            nums[i] = temp[i];
        }

        return temp.size();
    }
};

