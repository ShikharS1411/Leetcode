class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& p, vector<int>& t) {
        int np=p.size(),nt=t.size();
        int i=0,j=0;
        sort(p.rbegin(),p.rend());
        sort(t.rbegin(),t.rend());
        int count=0;
        while(i<np && j<nt){
            if(p[i]<=t[j] && i<np && j<nt){
                count++;
                i++,j++;
            }
            else if(p[i]>t[j] && i<np)i++;
        }
        return count;
    }
};