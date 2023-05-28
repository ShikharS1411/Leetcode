class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        queue<int>q;
        vector<int>color(graph.size(),-1);
        for(int i=0;i<graph.size();i++){
            if(color[i]==-1){
                q.push(i);
                color[i]=0;
                while(!q.empty()){
                    int node=q.front();
                    q.pop();
                    //ab iske dosto ko dhoondo with color ez
                    for(auto edge:graph[node]){
                        if(color[edge]==-1){
                            //parent ke opposite color kr do 
                            color[edge]=!color[node];
                            q.push(edge);
                        }
                        //agr already visited h then check
                        else if(color[edge]==color[node])return false;
                    }
                }
            }
        }
        return true;
    }
};