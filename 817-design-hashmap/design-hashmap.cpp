#include <map>
using namespace std;

class MyHashMap {
public:
    map<int, int> mpp;   // Declare as class member

    MyHashMap() {
    }
    
    void put(int key, int value) {
        mpp[key] = value;
    }
    
    int get(int key) {
        if (mpp.find(key) != mpp.end()) {
            return mpp[key];
        }
        return -1;   // Return -1 if key does not exist
    }
    
    void remove(int key) {
        mpp.erase(key);
    }
};