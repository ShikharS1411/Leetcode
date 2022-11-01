class Solution {
public:
    //function to check vowel
    bool isvowel(char ch){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')return true;
        return false;
    }
    int countVowelSubstrings(string word) {
        //can apply brute force as constraints are less ranged->o(n2)
        int count=0;
        for(int i=0;i<word.size();i++){
            unordered_map<char,int>umap;//need to create an umap every time aftr one complete iteration
            for(int j=i;j<word.size();j++){
                if(isvowel(word[j])==true)umap[word[j]]++;
                else break;//jb ek bhi char missing ho
                if(umap.size()==5)count++;//condition here only not outside of this loop as in 1 iteration there can be 2 substring && no matter how many times they occur size will remain 5 (if continous)
            }
        }
        return count;
    }
};