class Vector2D {
public:
    vector<int> vec;
    int track;
    
    Vector2D(vector<vector<int>>& v) {
        track = 0;
        for(auto e:v){
            for(int i:e){
                vec.push_back(i);
            }
        }
    }
    
    int next() {
        return vec[track++];
    }
    
    bool hasNext() {
        return track < vec.size();
    }
};

/**
 * Your Vector2D object will be instantiated and called as such:
 * Vector2D* obj = new Vector2D(v);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
