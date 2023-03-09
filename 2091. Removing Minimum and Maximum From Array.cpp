class Solution {
public:
    int minimumDeletions(vector<int>& a) {
        /*
        // int mini=min_element(a.begin(),a.end())-a.begin();
        // int maxi=max_element(a.begin(),a.end())-a.begin();
        // cout<<mini<<" "<<maxi<<endl;
        int mini=*min_element(a.begin(),a.end());
        int maxi=*max_element(a.begin(),a.end());
        int n=a.size();
        string s="";
        for(auto x:a)s+=(x+'0');
        int p=s.find(mini+'0');
        cout<<p<<" ";
        int q=s.rfind(mini+'0');
        cout<<q<<endl;
        int mn=min({p,abs(p-(n-1)),q,abs(q-(n-1))});
        
        int x=s.find(maxi+'0');
        cout<<x<<" ";
        int y=s.rfind(maxi+'0');
        cout<<y<<endl;
        int mx=min({x,abs(x-(n-1)),y,abs(y-(n-1))});
        cout<<mn<<" "<<mx<<endl;
        // return -1;
        int sum=mn+mx+2;
        return sum;
        */
        
        //ok->"The integers in nums are distinct." better read the constraints hauuuuuuuuuu
        //as all are diff so go with iterative way but keep in check mim(close,end) from that ind,3 cases banenge ig
        int n=a.size();
        int mini=min_element(a.begin(),a.end())-a.begin();//indexes
        int maxi=max_element(a.begin(),a.end())-a.begin();
        int mn=min(maxi,mini);//min index
        int mx=max(maxi,mini);//max index
        //from end
        int p=n-mn;
        //from start
        int q=mx+1;
        
        //from both the end
        int r=n-mx,s=mn+1;
        int sum=r+s;
        return min({p,q,sum});
    }
};