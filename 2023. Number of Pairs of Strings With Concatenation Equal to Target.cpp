class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        /*
        //as low ranged constraints will apply brute force
        int count=0;
        for(int i=0;i<s.size();i++){
            for(int j=0;j<s.size();j++){
                if(i!=j and s[i]+s[j]==target)count++;
            }
        }
        return count;
        */
        //optimal approach->using maps
        unordered_map<string, int> umap;
        int count=0;
        for(auto x:nums){
            umap[x]++;
        }
        string temp1="",temp2="";
		
        for(int i=0;i<target.size();i++){
            temp1+=target[i];
            temp2=target.substr(i+1);//i+1 se end tk ki substr
            if(umap.find(temp1)!=umap.end() && umap.find(temp2)!=umap.end()){
                if(temp1==temp2)count+=(umap[temp1]*(umap[temp1]-1));
                else count+=umap[temp1]*umap[temp2];
            }
        }
        return count;
        /*
        //wrong approach as we cant substract two strings but can add
        for(auto x:s){
            if(umap.find(target-x)!=umap.end())count+=umap[target-x];
            umap[x]++;
        }
        */
    }
};