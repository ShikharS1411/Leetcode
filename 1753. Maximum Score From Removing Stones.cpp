class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int>maxh;
        maxh.push(a);
        maxh.push(b);
        maxh.push(c);
        int score=0;
        while(maxh.size()>1){
            //as two at a time
            int x=maxh.top();
            x--;
            maxh.pop();
            int y=maxh.top();
            y--;
            maxh.pop();
            if(x>0)maxh.push(x);
            if(y>0)maxh.push(y);
            score++;
        }
        return score;
    }
};