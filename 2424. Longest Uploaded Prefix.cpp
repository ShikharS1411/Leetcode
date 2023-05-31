class LUPrefix {
public:
    LUPrefix(int n) {
        
    }
    map<int,bool>mp;
    int i=0;
    void upload(int video) {
        mp[video]=true;
        while(mp[i+1])i++;
    }
    
    int longest() {
        return i;
    }
};

/**
 * Your LUPrefix object will be instantiated and called as such:
 * LUPrefix* obj = new LUPrefix(n);
 * obj->upload(video);
 * int param_2 = obj->longest();
 */