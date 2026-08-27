class MyCalendarThree {
private:
    map<int, int> timeline;

public:
    MyCalendarThree() {
        
    }
    
    int book(int startTime, int endTime) {
        timeline[startTime]++;
        timeline[endTime]--;

        int currActive=0;
        int maxActive=0;

        for(auto& [time,count]: timeline){
            currActive=currActive+count;

            maxActive = max(currActive,maxActive);
        }

        return maxActive;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(startTime,endTime);
 */