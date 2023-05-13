class Solution {
public:
    int numberOfRounds(string in, string out) {
        int s=stoi(in.substr(0,2))*60+stoi(in.substr(3));
        int t=stoi(out.substr(0,2))*60+stoi(out.substr(3));
        if(s>t)t+=60*24;
        if(s%15)s+=15-(s%15);
        return (t-s)/15;
    }
};