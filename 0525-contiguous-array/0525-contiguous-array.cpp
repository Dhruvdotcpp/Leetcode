class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n1=0,n0=0;
        vector<int> arr(nums.size());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) n0++;
            else n1++;

            arr[i]=n1-n0;
        }

        unordered_map<int,int> freq;
        freq[0]=-1;
        int dist=0;
        for (int i = 0; i < arr.size(); ++i) {
            if (freq.find(arr[i]) == freq.end()) {
                freq[arr[i]] = i;
            } 
            else {
                int currdist = i - freq[arr[i]]; 
                dist = max(dist, currdist);
            }
        }
        
        return dist;

    }
};