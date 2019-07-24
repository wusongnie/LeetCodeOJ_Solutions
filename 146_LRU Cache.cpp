class LRUCache {
public:
    class cacheNode{
    public:
        int key;
        int value;
        cacheNode* prev;
        cacheNode* next;
    };
    
    void addNode(cacheNode* node){
        node->prev = head;
        node->next = head->next;
        head->next->prev = node;
        head->next = node;
    }
    
    void removeNode(cacheNode* node){
        cacheNode* prev = node->prev;
        cacheNode* next = node->next;
        
        prev->next = next;
        next->prev = prev;
    }
    
    void moveToHead(cacheNode* node){
        removeNode(node);
        addNode(node);
    }
    
    cacheNode* popTail(){
        cacheNode* res = tail->prev;
        removeNode(res);
        return res;
    }
    
    unordered_map<int, cacheNode*> map;
    cacheNode* head;
    cacheNode* tail;
    int size;
    int capacity;
    
    LRUCache(int capacity) {
        this->map = unordered_map<int, cacheNode*>();
        this->capacity = capacity;
        this->size = 0;
        this->head = new cacheNode();
        this->tail = new cacheNode();
        head->next = tail;
        tail->prev = head;
    }
    
    int get(int key) {
        if(map.find(key) == map.end())
            return -1;
        cacheNode* node = map[key];
        moveToHead(node);
        return node->value;
    }
    
    void put(int key, int value) {
        if(map.find(key) == map.end()){
            cacheNode* newNode = new cacheNode();
            newNode->key = key;
            newNode->value = value;
            map[key] = newNode;
            addNode(newNode);
            ++size;
            if(size > capacity){
                cacheNode* tail = popTail();
                map.erase(tail->key);
                --size;
            }
        }else{
            cacheNode* node = map[key];
            node->value = value;
            moveToHead(node);
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
