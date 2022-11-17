class Solution {
public:
    int maxArea(vector<int>& height) {
        /*
        //brute force,although cant apply as per constraints range(n2=10^10)->TLE
        int maxi=-1e9;
        for(int i=0;i<height.size();i++){
            for(int j=0;j<height.size();j++){
                if(height[i]<=height[j]){
                    int area=height[i]*abs(j-i);
                    maxi=max(maxi,area);
                }
            }
        }
        return maxi;
        */
        //optimised approach->using two pointers,similar to two sum
        int i=0,j=height.size()-1,maxi=-1e9;
        while(i<j){
            maxi=max(min(height[i],height[j])*(j-i),maxi);
            if(height[i]>height[j])j--;
            else i++;
        }
        return maxi;
    }
};