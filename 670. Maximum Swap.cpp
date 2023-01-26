class Solution {
public:
    int maximumSwap(int n) {
        string s=to_string(n);
        if(is_sorted(s.rbegin(),s.rend()))return n;
        string temp=s;
        sort(temp.rbegin(),temp.rend());
        int i=0,sz=s.size();
        while(i<sz){
            if(s[i]<temp[i]){
                // string sub=s.substr(i,sz);
                //last occurence dekhni hogi upper_bound may be??
                //cant apply this as well coz upper_bound concept only in sorted array bruh -_-
                // int pos=upper_bound(s.begin(),s.end(),temp[i])-s.begin()-1;
                // cout<<pos<<endl;
                //swap with its last occurence
                //rte why????
                // int cnt=count(s.begin(),s.end(),temp[i]),c=0,pos=-1;
                // for(int i=0;i<sz;i++){
                //     if(s[i]==temp[i])c++;
                //     if(c==cnt){
                //         pos=i;
                //         break;
                //     }
                // }
                int pos=s.find_last_of(temp[i]);
                swap(s[i],s[pos]);
                break;
            }
            i++;
        }
        return stoi(s);
    }
};