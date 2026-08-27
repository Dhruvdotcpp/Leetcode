class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> diff(n+1,0);

        for(auto& b:bookings){
            int l=b[0], r=b[1], seats=b[2];

            diff[l-1]+= seats;
            diff[r]-= seats;
        }

        vector<int> result(n);
        result[0]=diff[0];
        for(int i=1;i<n;i++){
            result[i]=result[i-1]+diff[i];
        }

        return result;

    }
};