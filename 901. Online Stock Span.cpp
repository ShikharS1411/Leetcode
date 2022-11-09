class StockSpanner {
public:
            //if nothing is lesser than the element(behind) then allocate 1 if exists then add 1 to that no as itself is also counted;
        //span->no of prev consecutive days(including current day) which has value smaller or equal to today price/element
        //wont be applying brute force as not complete array is given,as prices are being added simultanously otherwise o(n2)sol
        //so using stacks 
    stack<pair<int,int>>st; // price, span
    StockSpanner() {
        
    }
    int next(int price) {
        int span = 1;
        
        while(!st.empty() && st.top().first <= price){
            span += st.top().second;
            st.pop();
        }
        
        st.push({price, span});
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */