class Solution {
public:
    int eventtomin(string s){
        //similar to stoi '1'-'0'=1(int)
        int totalmin=((s[0]-'0')*10+(s[1]-'0'))*60+(s[3]-'0')*10+(s[4]-'0');
        return totalmin;
    }
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        //to store the results
        int range1[2],range2[2];
        range1[0]=eventtomin(event1[0]);
        range1[1]=eventtomin(event1[1]);
        //condition check
        if(range1[1]==0) range1[1]=1440;//to ->00:00 i.e complete 1440 mins
        range2[0]=eventtomin(event2[0]);
        range2[1]=eventtomin(event2[1]);
        //condition check
        if(range2[1]==0) range2[1]=1440;//to ->00:00 i.e complete 1440 mins
        //so now we have two arrays range with minute of each event's timings slot
        if(range1[1]>=range2[0]&&range1[0]<=range2[0])return true;
        if(range1[0]>=range2[0]&&range1[0]<=range2[1])return true;
        return false;
    }
};