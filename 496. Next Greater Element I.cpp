class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        /*
        //brute force:i->n,j=i=1 check for greater and then break if exists
        //raw approach for next greater element
        //transformation in the same array
        stack<int>st;
        vector<int>ans;
        //backward appraoch
        for(int i=nums2.size()-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums2[i]) st.pop();
            int x=ans[i];
            if(!st.empty()) ans[i]=st.top();
            else ans[i]==-1;
            st.push(x);//from the original untransformed array
        }
        */
        //using hashing and stacks
        //1st step-> find next greater element of nums2 elements and store it in num2 itself
        //2nd step->store all next greater elements of nums2 in a hashmap
        //3rd step-> find the req nums1 element and their mapped ones from the hashmap
        /*
        //1st step:
        stack<int>st;
        //creating a new array to store next greater elements
        vector<int>temp(nums2.size(),-1);//by default -1
        //traverse from back
        for(int i=nums2.size()-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums2[i]) st.pop();
            if(!st.empty()) temp[i]=st.top();
            // else temp[i]==-1; no need to apply this condition as by default its -1
            st.push(nums2[i]);
        }
        //2nd step://as unique elements
        unordered_map<int,int>umap;
        for(int i=0;i<nums2.size()-1;i++){
            umap[nums2[i]]=temp[i];
        }
        // 3rd step:
        vector<int>ans;
        for(auto x:nums1){
            ans.push_back(umap[x]);//x will represent the elements
        }
        return ans;
        */
        //optimised approach
        stack<int>st;
        vector<int>ans;
        unordered_map<int,int>umap;
        //store in the map at the same time
        for(int i=nums2.size()-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums2[i]) st.pop();
            if(!st.empty()) umap[nums2[i]]=st.top();
            if(st.empty())umap[nums2[i]]=-1;
            st.push(nums2[i]);
        }
        //traverse nums1 and find its greater element from the map
        for(auto x:nums1) ans.push_back(umap[x]);
        return ans;
    }
};