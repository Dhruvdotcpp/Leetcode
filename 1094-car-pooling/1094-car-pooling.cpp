class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int n=1001;
        vector<int> diff(n, 0);

        for(auto& t:trips){
            diff[t[1]] += t[0];
            diff[t[2]] -= t[0];
        }

        vector<int> check(n);
        check[0]=diff[0];
        for(int i=1;i<n;i++){
            check[i]=check[i-1]+diff[i];
        }

        for(int i=0;i<n;i++){
            if(check[i]>capacity) return false;
        }

        return true;
    }
};