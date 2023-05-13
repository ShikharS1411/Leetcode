class Solution {
public:
    int countSeniors(vector<string>& s) {
        //11,12
        int count=0;
        for(auto x:s){
            string t="";
            t+=x[11];
            t+=x[12];
            int age=stoi(t);
            if(age>60)count++;
        }
        return count;
    }
};