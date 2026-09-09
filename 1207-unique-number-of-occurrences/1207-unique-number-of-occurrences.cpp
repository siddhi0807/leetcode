class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int freq[2001] = {0};      
        int occ[1001] = {0};       

        for(int i = 0; i < arr.size(); i++) {
            freq[arr[i] + 1000]++;
        }

        for(int i = 0; i < 2001; i++) {
            if(freq[i] > 0) {
                if(occ[freq[i]] == 1) {
                    return false;
                }
                occ[freq[i]] = 1;
            }
        }

        return true;
    }
};
