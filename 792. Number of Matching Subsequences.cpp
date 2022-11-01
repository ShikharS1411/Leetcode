class Solution {
    /*
    //recursive appraoch
    void solve(string s,int ind,string temp){
        //pick and not pick apprproach
        //base case
        if(ind==s.size())return;
        //pick
        // temp.push_back(to_string(s[ind]);
        temp+=s[ind];
        solve(s,ind++,temp);
        // temp.pop_back(s[ind]);
        temp-=s[ind];
        //not pick
        solve(s,ind++,temp);
    }
    */
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        /*
        //wrong appraoch
        //recursive and iterative approach
        //recursive
        int ind=0,j=0;
        // vector<string>temp;
        string temp="";
        //function call
        solve(s,ind,temp);
        sort(temp.begin(),temp,end());//andr wli string sort nhi hogi upr se arrange honge
        for(string x:temp){
            if(x==words[j])j++;
        }
        return j;
        */
        //optimised approach->using hashmaps
        int count=0;
        unordered_map<string,int>umap;
        //store the freq of subseq(words)in a map
        for(auto x:words)umap[x]++;
        for(auto x:umap){
            string temp=x.first;
            //using two pointer appraoch
            //  i for string s,j for string temp i.e subsequence
            int i=0,j=0;//will be updated to normal i.e 0,0 after each complete iteration
            while(i<s.size()&&j<temp.size()){
                if(s[i]==temp[j])i++,j++;
                //if not matched then check for other
                else i++;
            }
            //agr j size ke equal reach kr jta h toh woo subseq word string ka hi h 
            if(j==temp.size())count+=x.second;//freq
        }
        return count;
    }
};