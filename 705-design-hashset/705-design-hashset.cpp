class MyHashSet {
public:
    vector<bool>hset=vector<bool>(1000001,false);
    MyHashSet() {
        
    }
    
    void add(int key) {
        hset[key]=true;
    }
    
    void remove(int key) {
        hset[key]=false;
    }
    
    bool contains(int key) {
        return hset[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */