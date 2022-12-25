/*
class Solution {
public:
    vector<int> topStudents(vector<string>& p, vector<string>& n, vector<string>& r, vector<int>& s, int k) {
        //heaps
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<r.size();i++){
            int count=0;
            for(int j=0;j<p.size();j++){
                if(r[i].find(p[j]))count+=3;
            }
            for(int k=0;k<n.size();k++){
                if(r[i].find(n[k]))count--;
            }
            pq.push({-count,s[i]});
        }
        while(k--)pq.pop();
        vector<pair<int,int>ans;
        while(!pq.empty()){
            int x=abs(pq.top().first),y=pq.top().second;
            ans.push_back({x,y});
            pq.pop();
        }
        reverse(ans.begin(),ans.end());
    }
};
*/
class Solution {
public:
    static bool comp(pair<int,int>a,pair<int,int>b){
        if(a.second==b.second){
            return a.first<b.first;
        }
        return a.second>b.second;
    }
    vector<int> topStudents(vector<string>& pos, vector<string>& neg, vector<string>& r, vector<int>& id, int k) {

     unordered_map<int,int>curr;
     unordered_map<string,int>p,n;
     for(auto x : pos){
         p[x]++;
     }
     for(auto x : neg){
         n[x]++;
     }
     for(int i=0;i<r.size();i++){
         string line=r[i];
         int score=0;
         for(int j=0;j<line.size();j++){
             string temp="";
             while(j<line.size() && line[j]!=' '){
                 temp+=line[j];
                 j++;
             }
             if(p.find(temp)!=p.end()){
                 score+=3;
             }
             if(n.find(temp)!=n.end()){
                 score-=1;
             }
         }
         curr[id[i]]=score;
     }
     vector<pair<int,int>>v;
     for(auto x :curr){
         v.push_back({x.first,x.second});
     }
        sort(v.begin(),v.end(),comp);//bool funct call uske hiasb se sort hoga,can use lamda function as well.sme hr 2 element ko compare krega
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(v[i].first);
        }
        return ans;
    }
};