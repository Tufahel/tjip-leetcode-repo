class LRUCache {
public:
    list<int>lru;
    int max_capacity;
    unordered_map<int, int>keyValue;
    unordered_map<int, list<int>::iterator>mp;
    LRUCache(int capacity) {
        max_capacity = capacity;
    }
    
    int get(int key) {
        if(keyValue.count(key) == 0) return -1;
        updateLRU(key);
        return keyValue[key];
    }
    
    void put(int key, int value) {
        if(keyValue.size() == max_capacity && keyValue.count(key) == 0) evict();
        updateLRU(key);
        keyValue[key] = value;
    }

    void updateLRU(int key){
        if(keyValue.count(key)) lru.erase(mp[key]);
        lru.push_front(key);
        mp[key] = lru.begin();
    }

    void evict(){
        int last_key = lru.back();
        mp.erase(last_key);
        keyValue.erase(last_key);
        lru.pop_back();
    }
};