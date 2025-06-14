class MyHashSet {
private:
    int size;
    vector<vector<int>> Set;
public:
    MyHashSet() {
        size = 10001;
        Set = vector<vector<int>> (size, vector<int> ());
    }
    
    int hash(int key){ return key % size;}

    void add(int key) {
        int idx = hash(key);

        for(auto val : Set[idx]){
            if(val == key) return;
        }
        Set[idx].push_back(key);
    }
    
    void remove(int key) {
        int idx = hash(key);
        for(int i = 0;i < Set[idx].size();i++){
            if(Set[idx][i] == key){
                Set[idx].erase(Set[idx].begin() + i);
                break;
            }
        }
    }
    
    bool contains(int key) {
        int idx = hash(key);
        for(int i = 0;i < Set[idx].size();i++){
            if(Set[idx][i] == key)
                return true;
        }
        return false;
    }
};