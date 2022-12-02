class Solution {
public:
    /*
    bool isvalid(map<char,int>&umap1,map<char,int>&umap2){
        string temp1="",temp2="";
        for(auto x:umap1)temp1+=x.first;
        for(auto x:umap2)temp2+=x.first;
        return temp1==temp2;
        
    }
    */
    /*
    bool isvalid(set<char>&s1,set<char>&s2){
        return s1==s2;
    }
    */
    int longestBeautifulSubstring(string word) {
        /* 
        //not appropriate approach
        //manually define a map
        map<char,int>umap1={{'a',1},{'e',1},{'i',1},{'o',1},{'u',1}};
        map<char,int>umap2;
        int i=0,n=word.size(),maxi=0;
        for(int j=0;j<5;j++){
            //as 5 toh hone hi atleast
            umap2[word[j]]++;
        }
        //condition check
        if(isvalid(umap1,umap2))maxi=5;
        //ab start 5 se krna h,pr i ko 1 se nhi krna as it is not necessary that j-i+1 would be of fixed size k==5
        for(int j=5;j<n;j++){
            while(!isvalid(umap1,umap2)){
                umap2[word[i]]--;
                if(umap2[i]==0)umap2.erase(word[i]);
                i++;
            }
            maxi=max(maxi,j-i+1);
            umap2[word[j]]++;
        }
        return maxi;
        */
        /*
        //using sets
        set<char>s1={'a','e','i','o','u'},s2;
        //now start traversing
        int i=0,n=word.size(),maxi=0;
        for(int j=0;j<5;j++){
            s2.insert(word[j]);
            if(isvalid(s1,s2))maxi=5;
        }
        for(int j=5;j<n;j++){
            s2.insert(word[j]);
            //<5 aur !isvalid aur vowels ka bhi dekhna hoga yeh bekr appraoch h
            while(i<j and !isvalid(s1,s2) and j-i+1==5){//must apply i<j condition
                s2.erase(word[i]);
                i++;
            }
            if(isvalid(s1,s2))maxi=max(maxi,j-i+1);
        }
        return maxi;
        */
        unordered_map<char,int>umap;
        int i=0,n=word.size(),maxi=0;
        for(int j=0;j<n;j++){
            if(umap.empty() and word[j]=='a'){
                umap[word[j]]++;
                i=j;//update i
            }
            else if(!umap.empty() and word[j-1]>word[j]){
                umap.clear();//cant make a substring from itneed to discard completely
                j--;
            }
            else {//when all perfect
                umap[word[j]]++;
                if(umap.size()==5)maxi=max(maxi,j-i+1); 
            }
        }
        return maxi;
    }
};