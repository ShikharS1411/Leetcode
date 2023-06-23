class Solution {
public:
    int minGroups(vector<vector<int>>& a) {
        sort(a.begin(),a.end());
        priority_queue<int,vector<int>,greater<int>> pq;
        pq.push(a[0][1]);
        int count=1;//as 1 toh rhega hi
        for(int i=1;i<a.size();i++){
            int x=a[i][0];
            if(x>pq.top()){
                pq.pop();
                pq.push(a[i][1]);
            }
            else{
                count++;
                pq.push(a[i][1]);
            }
        }
        return count; 
    }
};