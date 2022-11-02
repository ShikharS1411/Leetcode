class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        //copy all matrix element in an array in sorted order and k-1
        //that will take o(n2) tc
        // as kth element is asked so we'll use heap o(nlogk) tc
        //for smallest->max heap
        
        //define max heap
        priority_queue<int>pq;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                pq.push(matrix[i][j]);
                if(pq.size()>k) pq.pop();
            }
        }
        return pq.top();//as top element would be the Kth Smallest Element
    }
};