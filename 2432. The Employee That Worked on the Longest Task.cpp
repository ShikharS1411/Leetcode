class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        //can use heaps/hashmaps/pairing+iterative
        /*
        //using hashing
        unordered_map<int,int>umap;
        int temp=0;
        int maxi=INT_MIN,mini=INT_MAX;
        for(int i=1;i<logs.size();i++){
                umap[logs[0][0]]=logs[0][1];
                umap[logs[i][0]]=logs[i][1]-logs[i-1][1];
            
        }
        for(auto x:umap){
            //for maximum element
            int key=x.first,val=x.second;
            if(val>maxi){
                maxi=val;
                // temp=key;
            }
            //for min out of all equal ones
            else if(val==maxi){
                if(key<mini){
                    mini=key;
                    // temp=key;
                }
                temp=key;
            }
        }
        return temp;
        */
        /*
        int cur=0;
        map<int, int> mp;
        for (auto x : logs) {
            mp[x[0]]=max(mp[x[0]], x[1]-cur);
            cur=x[1];
        }
        int ans=-1;
        for (auto x : mp)
            if (ans==-1||x.second>mp[ans])
                ans=x.first;//x.first elements would be in sorted way as map is always sorted top to bottom incso will consider the smaller value if x.second bcme same 
        return ans;
        */
                      int work = logs[0][1];
              int id = logs[0][0];
        
              int len = logs.size();
        
              for(int i = 1; i < len; i++) {
                  int diff = logs[i][1] - logs[i-1][1];
                  if(diff > work) {
                      id = logs[i][0];
                      work = diff;
                  }
                  else if(diff == work) {
                      if(id > logs[i][0])
                          id = logs[i][0];
                      work = diff;
                  }
              }
        return id;
    }
};