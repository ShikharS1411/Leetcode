class Solution {
public:
    int countTime(string t) {
        /*
        //simple brute force sol ++dont use much brain in easy q,check constraints and then prefer brute force
        
        int count=1;//as it need to be multiplied as further we can get ??:?4 cases in which multiplication is needed after count the possiblities
        
        //FOR hr CASES:
        // ++order matters first will check the necessary condition then will proceed
        //1.if 0th place is ?(knowing)
        //1. if both ? ?
        if(s[0]=='?'&&s[1]=='?') count*=24;//0->23
        //2.if ? <=3
        else if(s[0]=='?'&&s[1]<=3)count*=3;//0,1,2
        //3.if ? >3
        else if(s[0]=='?'&&s[1]>3)count*=2;//0,1
        
        //2.if 1st place is ?(knowing)
        //1.if <=1 ? ++ this case is important can just take 0 and 1 
        if(s[1]=='?'&&(s[0]=='0'||s[0]=='1')) count*=10;//0->9
        //2. if ==2 ?
        else if(s[1]=='?'&&s[0]==2)count*=4;//0,1,2,3
        
        //FOR min CASES
        
        //1.if 3rd place is ?(knowing)
        //1. if both ? ?
        if(s[3]=='?'&&s[4]=='?')count*=60;//00->59
        //2. if ? !=?
        else if(s[3]=='?'&&s[4]!='?')count*=6;//0,1,2,3,4,5
        
        //2. if 4th place is '?'(knowing)
        if(s[4]=='?'&&s[3]!='?')count*=10;//0->9
        
    return count;
    */
      
        int c = 1;
        if(t[0] == '?' && t[1] == '?')
        {
            c *= 24;//0-23
        }
        else if(t[0] == '?' && t[1] <='3')
        {
            c *= 3;//0 1 2
        }
        else if(t[0] == '?' && t[1] > '3')
            c *= 2; // 1 0
        
        if(t[1] == '?' && (t[0]=='0' or t[0] == '1'))
            c *= 10; // 0- 9
        else if(t[1] == '?' && t[0] == '2')
            c *= 4; // 0 1 2 3
        
        if(t[3] == '?' && t[4] == '?')
            c*= 60;// 0- 59
        else if(t[3] == '?' && t[4] != '?')
            c*=6;// 0- 5
        
        if(t[4] == '?' && t[3] != '?')
            c *= 10;// 0 - 9 59 56 57 
        
        return c;
              
    }
};