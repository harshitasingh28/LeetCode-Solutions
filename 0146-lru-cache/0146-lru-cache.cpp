class LRUCache {
public:
    class Node{
        public:
          int k;
          int val;
          Node* next;
          Node* prev;
          Node(int key, int value){
               k = key;
               val = value;
          }
    };
    int cap;
    Node* head = new Node(-1, -1);
    Node* tail = new Node(-1, -1);
    unordered_map<int, Node*> mp;

    LRUCache(int capacity) {
       cap = capacity;
       head->next = tail;
       tail->prev = head;
    }
    void add( Node* newNode){
        Node* temp = head->next;
        newNode->next = temp;
        newNode->prev = head;
        head->next = newNode;
        temp->prev = newNode;
    }
    void deleteNode(Node* delNode){
        Node* delNext = delNode->next;
        Node* delPrev = delNode->prev;
        delPrev->next = delNext;
        delNext->prev = delPrev;
    }
    int get(int key) {
        if(mp.find(key)!= mp.end()){
            Node* node = mp[key];
            deleteNode(node);
            add(node);
            mp[key] = node;
            return node->val;
        }
        return -1;
    }
    
    void put(int key, int value) {
       if(mp.find(key) != mp.end()){
           Node* node = mp[key];
           node->val = value;
           deleteNode(node);
           add(node);
           mp[key] = node;
       }else{
          if(mp.size() == cap){
              Node* node = tail->prev;
              mp.erase(node->k);
              deleteNode(node);
          }
          Node* newNode = new Node(key, value);
          mp[key] = newNode;
          add(newNode);
       }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */