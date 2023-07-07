class Solution {
    public:
    bool check(int mid,int k,string& a){
        unordered_map<char,int>mp;
        int i=0,j=0;
        while(j<a.size()){
            mp[a[j]]++;
            if((j-i+1)==mid){
                if(mp['T']+k>=mid || mp['F']+k>=mid)return true;
                mp[a[i]]--;
                i++;
            }
            j++;
        }
        return false;
    }
public:
    int maxConsecutiveAnswers(string a, int k) {
        int n=a.size();
        int l=1,r=n;
        int ans=0;
        while(l<=r){
            int mid=l+((r-l)/2);
            if(check(mid,k,a)){
                //as need to maximise
                ans=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        return ans;
    }
};