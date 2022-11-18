class Solution {
public:
    bool isvalid(map<char,int>&mp){
        for(auto x:mp){
            if(x.second>1)return false;
        }
        return true;
    }
    int lengthOfLongestSubstring(string s) {
        /*
        //1st approach->brute force
        int maxi=INT_MIN;
        for(int i=0;i<s.size();i++){
            string temp="";
            set<char>st;
            int n=temp.size();
            for(int j=i;j<s.size();i++){
                if(st.size()==n){
                    st.insert(s[j]);
                    temp+=s[j];   
                    int n=temp.size();
                    if(st.size()!=n)maxi=max(maxi,n-1);
                }
                else break;   
            }
            maxi=max(maxi,n);
        }
        return maxi;
        */
        //2nd optimal approach->using sliding window/two pointer(as size related q) and hashmaps
        map<char,int>mp;
        int i=0,j=0,n=s.size(),ans=0;//better do 0 as empty string can also be there
        while(j<n){
            mp[s[j]]++;
            if(isvalid(mp))ans=max(ans,j-i+1);//j-i+1->size of window/substring
            //jb reapeating char aa jye
            else{
                while(!isvalid(mp) and i<j){
                    mp[s[i]]--;
                    if(mp[s[i]]==0)mp.erase(s[i]);
                    i++;
                }
                ans=max(ans,j-i+1);
            }
            j++;
        }
        return ans;
    }
};