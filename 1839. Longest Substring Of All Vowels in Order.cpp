//prev wrong approach+tle one
/*
class Solution {
public:
    bool isvalid(map<char,int>&umap1,map<char,int>&umap2){
        string temp1="",temp2="";
        for(auto x:umap1)temp1+=x.first;
        for(auto x:umap2)temp2+=x.first;
        return temp1==temp2;
        
    }
    //for 2nd
    bool isvalid(set<char>&s1,set<char>&s2){
        return s1==s2;
    }
    int longestBeautifulSubstring(string word) {
        //not appropriate approach
        //manually define a map
        map<char,int>umap1={{'a',1},{'e',1},{'i',1},{'o',1},{'u',1}};
        map<char,int>umap2;
        int i=0,n=word.size(),maxi=0;
        for(int j=0;j<5;j++){
            //as 5 toh hone hi atleast
            umap2[word[j]]++;
        }
        //condition check
        if(isvalid(umap1,umap2))maxi=5;
        //ab start 5 se krna h,pr i ko 1 se nhi krna as it is not necessary that j-i+1 would be of fixed size k==5
        for(int j=5;j<n;j++){
            while(!isvalid(umap1,umap2)){
                umap2[word[i]]--;
                if(umap2[i]==0)umap2.erase(word[i]);
                i++;
            }
            maxi=max(maxi,j-i+1);
            umap2[word[j]]++;
        }
        return maxi;
        
        //2nd approach 
        //will give tle 
        //using sets
        set<char>s1={'a','e','i','o','u'},s2;
        //now start traversing
        int i=0,n=word.size(),maxi=0;
        for(int j=0;j<5;j++){
            s2.insert(word[j]);
            if(isvalid(s1,s2))maxi=5;
        }
        for(int j=5;j<n;j++){
            s2.insert(word[j]);
            while(!isvalid(s1,s2)){
                s2.erase(word[i]);
                i++;
            }
            maxi=max(maxi,j-i+1);
        }
        return maxi;
    }
};
*/


#define pb push_back
#define fi first
#define se second
class Solution {
public:
    int longestBeautifulSubstring(string s) {
        //implementation based 
        int n=s.size();
        //edge case as not in constraints
        if(n<5)return 0;

        vector<pair<char,int>>vp;
        int count=1;//wrna last rem ka count nhi hoga 
        //collective storing
        //isse last single char ka count store nhi kr pyenge directly so ek extra diff char add kr do
        s+='#';
        for(int i=1;i<=n;i++){
            if(s[i]==s[i-1])count++;
            else{
                vp.pb({s[i-1],count});
                count=1;//update to fresh
            }
        }
        
        for(auto x:vp)cout<<x.fi<<" "<<x.se<<endl;
        int maxi=0;//dont do -1e9 as if not found then need to return 0 itself 
        int sz=vp.size();
        for(int i=0;i<sz-4;i++){
            if(vp[i].fi=='a' && vp[i+1].fi=='e' && vp[i+2].fi=='i' && vp[i+3].fi=='o' && vp[i+4].fi=='u' ){
            int sum=(vp[i].se+vp[i+1].se+vp[i+2].se+vp[i+3].se+vp[i+4].se);
            maxi=max(maxi,sum);        
            }
        }
        return maxi;
    }
};