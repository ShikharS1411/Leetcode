class Solution {
public:
    string removeStars(string s) {
        /*
        //iterative approach,giving tle -_-
        for(int i=0;i<s.size();){
            if(s[i]=='*'){
                if(i>0){
                    s.erase(i-1,2);//star and its prev char would be erased
                    i--;
                }
            }
            else i++;
        }
        return s;
        */
        //using two pointer approach
        string ans ;//cant use vector<string>ans as its library wont be present in the compiler so better use normal 
        for (int i = 0; i < s.size();i++){    
            if (s[i] == '*')
                ans.pop_back();//not pushing the star instead skipping it and                       removing its prev pushed element from the ans string
            else 
                ans.push_back(s[i]);
        }
        return ans ;
    }
};