class Solution {
public:
    bool canWinNim(int n) {
        //as playing optimally
        //edge case
        if(n<=3)return true;
        if(n%4)return true;
        return false;
    }
};