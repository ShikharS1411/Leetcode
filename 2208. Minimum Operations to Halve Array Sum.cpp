class Solution {
public:
    /*
    bool check(priority_queue<double>&maxh,double sum1){
        double sum2=0.0;
        while(!maxh.empty()){
            sum2+=maxh.top();
            maxh.pop();
        }
        if(sum2<sum1/2.0)return false;
        return true;
    }
    */
    int halveArray(vector<int>& a) {
        /*
        priority_queue<double>maxh;
        double sum1=0.0;
        for(auto x:a){
            maxh.push(x);
            sum1+=x;
        }
        int count=0;
        while(check(maxh,sum1)){
            double x=maxh.top();
            maxh.pop();
            // x=x>>1;
            x=x/2.0;
            maxh.push(x);
            count++;
        }
        return count;
        */
        
        double sum1=0;
        priority_queue<double>maxh;
        for(auto x:a){
            sum1+=x;
            maxh.push(x);
        }
        double sum2=sum1/2.0;
        int count=0;
        while(sum1>sum2){
            double x=maxh.top();
            maxh.pop();
            x=x/2.0;
            sum1-=x;
            maxh.push(x);
            count++;
        }
    return count;
    }
};