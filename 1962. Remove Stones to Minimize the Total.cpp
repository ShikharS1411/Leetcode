class Solution {
public:
    int minStoneSum(vector<int>& p, int k) {
        //greedy+sort
        //can sort aftr every operations and can use pq as well
        priority_queue<int>maxh;
        for(auto x:p)maxh.push(x);
        while(k--){
            int x=maxh.top();
            maxh.pop();
            if(x&1){
                x=(x+1)>>1;
            }
            else x=x>>1;
            maxh.push(x);
        }
        int sum=0;
        while(!maxh.empty()){
            sum+=maxh.top();
            maxh.pop();
        }
        return sum;
        
        /*
        //2nd less optimal approach will give tle
        sort(p.begin(),p.end());
        int n=p.size();
        while(k--){
            if(p[n-1]&1)p[n-1]=(p[n-1]+1)>>1;
            else p[n-1]=p[n-1]>>1;
            sort(p.begin(),p.end());
        }
        int sum=0;
        for(auto x:p)sum+=x;
        return sum;
        */
    }
};