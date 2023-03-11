#define pb push_back
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        /*
        not optimal approach idk y
        //sliding window approach
        sort(p.begin(),p.end());
        int n=p.size();
        int sz=s.size();
        int i=0,j=n;
        string temp="";
        vector<int>ans;
        for(int k=0;k<j;k++)temp+=s[k];
        while(j<=sz){
            cout<<temp<<endl;
            string t=temp;
            sort(t.begin(),t.end());
            if(t==p)ans.pb(i);
            temp+=s[j];
            temp.erase(0,1);
            i++,j++;
        }
        return ans;
        */
        vector<int>ans;
        int n=p.size();
        //dont use sorting go with map instead kekw
        map<char,int>mp1,mp2;
        for(int i=0;i<n;i++){
            mp1[s[i]]++;
            mp2[p[i]]++;
        }
        int i=0,j=n-1;
        while(j<s.size()){
            if(mp1==mp2)ans.push_back(i);
            if(mp1[s[i]]>1)mp1[s[i]]--;
            else mp1.erase(s[i]);
            i++,j++;
            mp1[s[j]]++;
        }
        return ans;
    }
};