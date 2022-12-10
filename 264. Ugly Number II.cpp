# define ll long long
class Solution {
public:
    int nthUglyNumber(int n) {
        /*
        int count=0,i=1,temp=1;
        while(count<n){
            i=temp;
            while(i%2==0)i=i/2;
            while(i%3==0)i=i/3;
            while(i%5==0)i=i/5;
            if(i==1){
                count++;
                if(count==n)break;
            }
            // cout<<i<<" ";
            // cout<<temp<<" ";
            temp++;
        }
        return temp;
        */
        //optimised approach
        set<ll>st;
        ll ans = 0;       
        st.insert(1);
        while(n--){
            ll element =*st.begin();
            // cout<<*st.begin()<<" "; 
            ans = element;
            //in sorted order only
            st.insert(element*2);
            st.insert(element*3);
            st.insert(element*5);
            st.erase(element);
        }   
        return ans;
    }
};