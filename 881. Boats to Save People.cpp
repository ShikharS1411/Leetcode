class Solution {
public:
    int numRescueBoats(vector<int>& s, int limit) {
        //greedy->sort
        sort(s.begin(),s.end());
        //using two pointers
        int i=0,j=s.size()-1,count=0;
        while(i<=j){
            if(s[i]+s[j]<=limit){
                i++,j--;
                // count++;
            }
            else j--;
            count++;
        }
        return count;
    }
};