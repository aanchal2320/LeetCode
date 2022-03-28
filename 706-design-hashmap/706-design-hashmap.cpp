class MyHashMap {
    private:
        int map[1000001]={0};
public:
    MyHashMap() {
    }
    
    void put(int key, int value) {
        if(value==0)
        {
            map[key]=-1;
        }
        else
        {
            map[key]=value;
        }
    }
    
    int get(int key) {
        if(map[key]==-1)  //if value is -1 we return 0
        {
            return 0;
        }
            
        else if(map[key]==0)  // if value is 0 we return -1
        {
            return -1;
        }
        else
        {
            return map[key];
        }  
        
    }
    
    void remove(int key) {
        map[key]=0;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */