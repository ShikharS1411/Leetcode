class Solution {
public:
    int firstMissingPositive(vector<int>& a) {
        /*
        // if(a.front()!=1)return 1;
        sort(a.begin(),a.end());
        int i=a.front();
        bool check=true;
        for(auto x:a){
            if(x>0 && check){
                i=x;
                if(i!=1)return 1;
                check=false;
            }
            else if(x!=i && !check)return i;
            i++;
        }
        return i;
        */
        //hashmaps maybe??
        unordered_map<int,int>umap;
        for(auto x:a)umap[x]++;
        int i=1;
        int maxi=*max_element(a.begin(),a.end());
        while(i<=maxi){
            if(umap.find(i)==umap.end())return i;
            i++;
        }
        return i++;
    }
};