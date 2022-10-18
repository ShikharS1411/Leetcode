class Solution {
public:
    char nextGreatestLetter(vector<char>& s, char target) {
        //using binary search
        sort(s.begin(),s.end());
        //use upper bond as it returns the index of next greater index to that of target one's
        int ind=upper_bound(s.begin(),s.end(),target)-s.begin();
        // edge case(**very important**)
        if(ind==s.size())return s[0];
        return s[ind];
    }
};