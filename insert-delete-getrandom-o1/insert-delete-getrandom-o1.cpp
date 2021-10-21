class RandomizedSet {
public:
    unordered_map<int,int>m;
    vector<int>v;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
       if(m.find(val)!=m.end())
           return false;
        else
            m[val]=v.size();
            v.push_back(val);
            return true; 
    }
    
    bool remove(int val) {
        
        if(m.find(val)==m.end())
            return false;
        int idx=m[val];
            m.erase(val);
            int size=v.size();
            if(idx<size-1)
            {
                int a=v[v.size()-1];
                v[idx]=a;
                m[a]=idx;
            }
        v.pop_back();
        return true;
    }
    
    int getRandom() {
        return v[rand()%v.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */