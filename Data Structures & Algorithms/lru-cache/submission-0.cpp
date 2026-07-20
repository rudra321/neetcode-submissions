#include <unordered_map>
#include <list>
class LRUCache {

private:
    int cap;
    list<pair<int,int>> cacheList;
    unordered_map<int, list<pair<int,int>>::iterator> cacheMap;

public:
    LRUCache(int capacity) {
        cap = capacity;
    }
    
    int get(int key) {
        if(cacheMap.find(key) == cacheMap.end()) return -1;
        cacheList.splice(cacheList.begin(), cacheList, cacheMap[key]);
        return cacheMap[key]->second;
    }
    
    void put(int key, int value) {
        if (cacheMap.find(key) != cacheMap.end()) {
            cacheMap[key]->second = value;
            cacheList.splice(cacheList.begin(), cacheList, cacheMap[key]);
            return;
        }
        
        // If cache is full, evict the least recently used (back of the list)
        if (cacheList.size() == cap) {
            int lastKey = cacheList.back().first;
            cacheList.pop_back();      // Remove from list
            cacheMap.erase(lastKey);   // Remove from map
        }
        
        // Insert the new item at the front of the list
        cacheList.push_front({key, value});
        // Store the list iterator in the map
        cacheMap[key] = cacheList.begin();
    }
};
