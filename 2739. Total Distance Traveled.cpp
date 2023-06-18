class Solution {
public:
    int distanceTraveled(int mt, int at) {
        int ans=0;
        while(true){
            if(mt>=5){
                ans+=50;
                mt-=5;
                if(at)mt++,at--;
            }
            else break;
        }
        return ans+mt*10;
    }
};