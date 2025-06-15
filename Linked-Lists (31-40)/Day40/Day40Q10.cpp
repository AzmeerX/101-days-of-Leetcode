class MyHashMap {
private:
    int size;
    vector<vector<pair<int, int>>> Map;
public:
    MyHashMap() {
        size = 10001;
        Map = vector<vector<pair<int, int>>> (size);
    }
    
    int hash(int key){ return key % size;}

    void put(int key, int value) {
       int idx = hash(key);

       for(int i = 0;i < Map[idx].size();i++){
            if(Map[idx][i].first == key){
                Map[idx][i].second = value;
                return;
            }
       }
       Map[idx].push_back({key, value});
    }
    
    int get(int key) {
        int idx = hash(key);

        for(int i = 0;i < Map[idx].size();i++){
            if(Map[idx][i].first == key)
                return Map[idx][i].second;
       }
       return -1;
    }
    
    void remove(int key) {
        int idx = hash(key);

        for(int i = 0;i < Map[idx].size();i++){
            if(Map[idx][i].first == key)
                Map[idx].erase(Map[idx].begin() + i);
       }
    }
};