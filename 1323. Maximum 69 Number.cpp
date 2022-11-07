class Solution {
public:
    int maximum69Number (int num) {
        //as num is int
        // for(auto& x:num){
        //     if(x==6)x=9;
        // }
        //better convert into string
        string temp=to_string(num);
        for(auto& x:temp){
            if(x=='6'){
                x='9';
                break;
            }
        }
        int res=stoi(temp);
        return res;
    }
};