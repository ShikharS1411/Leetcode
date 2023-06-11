class SnapshotArray {
public:
    
    unordered_map<int, map<int, int>> mp; 
    int id;
    SnapshotArray(int length) {
        id = 0;
    }
    
    void set(int index, int val) {
        mp[index][id] = val;
    }
    
    int snap() {
        return id++;
    }
    
    int get(int index, int snap_id) {
        if(mp.find(index) == mp.end()) return 0;
        auto itr = mp[index].upper_bound(snap_id);
        if(itr == mp[index].begin()) return 0;
        itr = prev(itr);
        return itr->second;
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */