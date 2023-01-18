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