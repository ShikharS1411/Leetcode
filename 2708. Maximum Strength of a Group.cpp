#define ll long long int
#define pb push_back
class Solution {
public:
    long long maxStrength(vector<int>& a) {
        // sort(a.begin(),a.end());
        vector<int>pos,neg;
        // ll pos=0,neg=0;
        int cnt=count(a.begin(),a.end(),0);
        for(auto x:a){
            if(x<0)neg.pb(x);
            else if(x>0) pos.pb(x);
        }
        if(neg.size()==0 && pos.size()==0)return 0;
        // if(neg.size()==1 && pos.size()==0)return 0;
        ll prod=1;
        sort(neg.rbegin(),neg.rend());
        sort(pos.rbegin(),pos.rend());
        if(neg.size()){
            if(neg.size()>1){
                for(int i=1;i<neg.size();i++)prod*=neg[i];
                if(neg.size()%2==0)prod*=neg[0];
            }
            else if(neg.size()==1){
                if(pos.size()==0 &&cnt==0)prod*=neg[0];
                else if(pos.size()==0 && cnt)return 0;
            }
        }
        if(pos.size()){
            for(auto x:pos)prod*=x;
        }        
        return prod;
    }
};