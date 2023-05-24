class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int size=changed.size();
        vector<int>ans;//by default empty
        //edge case
        if(size%2) return ans;//size%2!=0
        
        map<int,int>mp;
        //store freq of every element in the map        
        for(auto x:changed) mp[x]++;
        
        /* this appraoch will throw rte as change map element wthin the iteration
        //traverse the map and do calculations
        for(auto x:mp){
            
            if((x.first)&&(x.first)*2){
                ans.push_back(x.first);
                //remove/erase the x,2x element from the map
                mp.erase(x.first);
                mp.erase((x.first)*2);
            }
        }
        return ans;
        */
        //more better approach
        sort(changed.begin(),changed.end());
        //iterate the anrray adn check for mapped elements the desired cond
        for(auto x:changed){
            //dealing with frequencies
            if(mp[x]==0) continue;//this is when no element has double but it left                                      in the map(thoda dimmag lagao)
            if(mp[2*x]==0) return {};//there exist no (freq) twice element of x in                                      the array
            if(mp[x]&&mp[2*x]){
                ans.push_back(x);
                //remove these elements
                mp[x]--;
                mp[2*x]--;
            }
        }
        return ans;
    }
};