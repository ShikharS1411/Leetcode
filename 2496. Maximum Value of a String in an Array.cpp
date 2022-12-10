class Solution {
public:
    int check(string &temp){
        int n=temp.size();
        for(int i=0;i<temp.size();i++){
            if((temp[i]-'0')>9)return temp.size();
        }
        return stoi(temp);
    }
    int maximumValue(vector<string>& s) {
        int maxi=0;
        for(string x:s){
            string temp="";
            temp+=x;
            // cout<<temp<<" ";
            //check
            maxi=max(maxi,check(temp));
        }
        return maxi;
    }
};