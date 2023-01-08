#define ll long long int
class Solution {
public:
    string categorizeBox(int l, int w, int h, int m) {
        //for bulky
        int x=0,y=0;
        ll vol=(ll)l*(ll)w*(ll)h;
        if(l>=10000||w>=10000||h>=10000||vol>=1000000000){
            x=1;//bulky
        }
        if(m>=100){
            y=1;//heavy
        }
        if(x==1 && y==1)return "Both";
        if(x==0 && y==0)return "Neither";
        if(x==1 && y==0)return "Bulky";
        return "Heavy";
    }
};