class Solution {
public:
    int findJudge(int n, vector<vector<int>>& a) {
        /*
        //do it by indegree and outdegree concept gud gud
        unordered_map<int,int>umap1,umap2;
        for(int i=0;i<a.size();i++){
            umap1[a[i][0]]=a[i][1];
            umap2[a[i][0]]++;
            umap2[a[i][1]]++;
        }
        int i=1,sz=umap2.size();
        while(i<=n){
            if(umap1.find(i)==umap1.end() && umap2[i]==sz-1)return i;
            i++;
        }
        return -1;
        */
        //in->+1,out->-1
        //in-out==n-1;to satify the cond
        vector<int>freq(n+1,0);
        for(int i=0;i<a.size();i++){
            freq[a[i][0]]--;
            freq[a[i][1]]++;
        }
        int i=1;
        while(i<=n){
            if(freq[i]==n-1)return i;
            i++;
        }
        return -1;
        
    }
};