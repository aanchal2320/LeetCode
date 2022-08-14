class SnapshotArray {
public:
    unordered_map<int,int>snapshot;
    unordered_map<int,unordered_map<int,int>>mp;
    int ind;
    SnapshotArray(int length) {
        ind=0;
    }
    
    void set(int index, int val) {
        snapshot[index]=val;
    }
    
    int snap() {
        mp[ind]=snapshot;
        return ind++;
    }
    
    int get(int index, int snap_id) {
       return mp[snap_id][index];
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */