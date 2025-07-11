class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
        priority_queue<int, vector<int>, greater<int>> available;
        priority_queue<pair<long long,int>, vector<pair<long long,int>>, greater<>> busy;

        vector<int> roomCount(n,0);

        sort(meetings.begin(),meetings.end());

        for(int i = 0; i < n; i++) {
            available.push(i);
        }

        for(int j = 0; j < meetings.size(); j++){
            int start = meetings[j][0];
            int end = meetings[j][1];

              while(!busy.empty() && busy.top().first <= start){
                int finishedroom = busy.top().second;
                busy.pop();
                available.push(finishedroom);
            }

            if(!available.empty()){
                int room = available.top();
                available.pop();
                busy.push({end,room});
                roomCount[room]++;
            }
            else{
                auto[earliestEnd,room] = busy.top();
                busy.pop();
                long long duration = end - start;
                busy.push({earliestEnd + duration,room});
                roomCount[room]++;
            }
        }

        int maxMeeting = 0;
        int resultRoom = 0;

        for(int i = 0; i < n; i++) {
            if(roomCount[i] > maxMeeting) {
                maxMeeting = roomCount[i];
                resultRoom = i;
            }
        }
        return resultRoom;
    }
};