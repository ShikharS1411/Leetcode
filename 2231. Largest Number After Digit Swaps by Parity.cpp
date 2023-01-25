class Solution {
public:
    // static bool comp(char a,char b){
    //     if((a-'0')&1 && (b-'0')&1){
    //         if(a>b)return false;
    //     }
    //     if((a-'0')%2==0 && (b-'0')%2==0){
    //         if(a>b)return false;
    //     }
    //     return true;
    // }
    int largestInteger(int n) {
        string s=to_string(n);
        priority_queue<char>pq1,pq2;
        for(auto x:s){
            if(x&1)pq1.push(x);
            else pq2.push(x);
        }
        for(auto &x:s){
            if(x&1){
                x=pq1.top();
                pq1.pop();
            }
            else {
                x=pq2.top();
                pq2.pop();
            }
        }
        return stoi(s);
    }
};