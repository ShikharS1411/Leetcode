class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        //greedy->sort
        sort(g.begin(),g.end(),greater<int>());
        sort(s.begin(),s.end(),greater<int>());
        int i=0,j=0;
        while(i<s.size() and j<g.size()){
            if(s[i]>=g[j])i++,j++;//satsified
            else j++;
        }
        return i;
    }
};