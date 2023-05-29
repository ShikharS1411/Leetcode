class Solution {
public:
    string largestPalindromic(string s) {
        /*
        giving tle/mle -_-
        map<char,int>mp;
        string temp="";
        for(auto x:s)mp[x]++;
        for(auto x:mp){
            if(x.second%2==0){
                while(x.second/2){
                    temp+=x.first;
                }
            }
            else if(x.second>2 && x.second&1){
                while((x.second-1)/2)temp+=x.first;
            }
        }
        //isko toh mid mei hi ana hoga no matter what
        string mid="";
        for(auto x:mp){
            if(x.second&1){
                mid+=x.first;
            }
        }
        sort(mid.rbegin(),mid.rend());
        mid=mid[0];//replace with largest char
        string ans=temp;
        reverse(temp.begin(),temp.end());
        ans=temp+mid+ans;
        return ans;
        */
                /*
        nhi ho rha :sad:
        map<char,int>mp;
        int cnt=count(s.begin(),s.end(),'0');
        if(cnt==s.size())return "0";
        for(auto x:s)mp[x]++;
        // if(mp.size()==1 && s[0]=='0')return 0;
        vector<pair<int,char>>e,o;
        for(auto x:mp){
            // x.se->freq,x.fi->char
            if(x.se&1)o.pb({x.se,x.fi});
            else e.pb({x.se,x.fi});
            cout<<x.fi<<" "<<x.se<<endl;
        }
        sort(o.rbegin(),o.rend());
        sort(e.rbegin(),e.rend());
        string t="";
        for(auto x:e){
            int y=x.fi/2;//freq of even char
            while(y--)t+=x.se;
        }
        sort(t.rbegin(),t.rend());
        string tt=t;
        reverse(t.begin(),t.end());
        // string mid="";
        char ch=o[0].se;
        int y=o[0].fi/2;
        string mid="";
        while(y--)mid+=ch;
        //check for greater 1 freq char
        int maxi=ch-'0';
        for(auto x:o){
            if(x.fi==1)maxi=max(maxi,(x.se-'0'));
        }
        string mid2=mid;
        mid+=(maxi+'0');
        mid+=mid2;
        tt+=mid;
        tt+=t;
        cout<<tt<<endl;
        //to avoid leading zeroes
        int i=0,j=tt.size()-1;
        while(tt[i]=='0' && tt[j]=='0')i++,j--;
        return tt.substr(i,j-i+1);
        */
      string start="",mid="",end="";
      unordered_map<char, int> umap;
      for (auto x :s) {
        umap[x]++;
      }

      for (char ch='9';ch>='0';ch--) {
        while(umap[ch]>1 &&(ch!='0'||!start.empty())){
          start.push_back(ch);
          end.push_back(ch);
          umap[ch]-=2;
        }
        if(umap[ch]>=1 && mid.empty())mid.push_back(ch);
      }
      reverse(end.begin(),end.end());
      return start + mid + end;
    }
};