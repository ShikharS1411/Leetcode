#define pb push_back
class Solution {
public:
    vector<string> twoEditWords(vector<string>&q, vector<string>&d) {
        //as per constrainsts can apply brute force
        vector<string>ans;
        for(auto x:q){
            for(auto it:d){
                cout<<it<<endl;
                int sz=x.size();
                int count=0;
                for(int i=0;i<sz;i++){
                    if(it[i]!=x[i])count++;
                }
                if(count<=2){
                    ans.pb(x);
                    break;//ek word se 2 hi edit kr skte thats y need break condi 
                }
            }
        }
        return ans;
    }
};