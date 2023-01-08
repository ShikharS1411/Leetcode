/*
class Solution {
public:
    long long maxKelements(vector<int>& a, int k) {
        sort(a.rbegin(),a.rend());
        long long score=0;
        while(k--){
            score+=a[0];
            // cout<<score<<endl;
            // a[0]=ceil(a[0]/3);
            // if(a[0]%3){
            //     a[0]=(a[0]/3)+1;
            // }
            // else a[0]=a[0]/3;
            a[0]=ceil((double)a[0]/3);
            sort(a.rbegin(),a.rend());
        }
        return score;
    }
};
*/
class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
       priority_queue<long long>pq;
        for(auto i:nums)
            pq.push(i);
        long long sum=0;
        while(!pq.empty()&&k--){
            long long res=pq.top();
            sum+=res;
            pq.pop();
            if(res%3)
                pq.push(res/3+1);
            else
                pq.push(res/3);
        }
        return sum;
    }
};