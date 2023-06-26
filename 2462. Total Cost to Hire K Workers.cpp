#define ll long long int
class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int cand) { 
             priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq1,pq2;  
        int i=0;
        while(i<cand){
            pq1.push({costs[i],i}); 
            i++;
        }
        int j=costs.size()-1;
        while(cand-- && j>=i){
            pq2.push({costs[j],j});  
            j--;
        }    
        ll ans=0;
        while(k--){ 
            if(!pq1.empty()&& !pq2.empty()){
                if(pq1.top()<pq2.top()){ 
                    ans+=pq1.top().first; 
                    pq1.pop(); 
                    if(pq1.size()<cand && i<=j){ 
                    pq1.push({costs[i],i});  
                    i++; 
                    }
                } 
                else{ 
                    ans+=pq2.top().first;
                    pq2.pop(); 
                     if(pq2.size()<cand && i<=j){ 
                    pq2.push({costs[j],j});  
                    j--; 
                    } 
                } 
            } 
            else if(!pq1.empty()){
                    ans+=pq1.top().first; 
                    pq1.pop();
                } 
            else if(!pq2.empty()){
                ans+=pq2.top().first; 
                pq2.pop();
            } 
            else break;
        } 
        return ans;
    }
};