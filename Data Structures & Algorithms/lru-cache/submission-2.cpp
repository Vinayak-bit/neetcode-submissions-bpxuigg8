class Node{
public:
    int key;
    int val;
    Node* next;
    Node* prev;
    Node(int k,int v){
        key=k;
        val=v;
        next=NULL;
        prev=NULL;
    }

};
class LRUCache {
public:
    int cap;
    unordered_map<int,Node*>mp;
    Node* left;
    Node* right;
    LRUCache(int capacity) {
        cap=capacity;
        left=new Node(0,0);
        right=new Node(0,0);
        left->next=right;
        right->prev=left;
    }
    void insert(Node* nod){
        Node* p=right->prev;
        p->next=nod;
        nod->next=right;
        right->prev=nod;
        nod->prev=p;
        return;
    }
    void remove(Node* nod){
        Node* p=nod->prev;
        Node* n=nod->next;
        p->next=n;
        n->prev=p;
        return;
    }
    int get(int key) {
        if(mp.find(key)!=mp.end()){
            remove(mp[key]);
            insert(mp[key]);
            return mp[key]->val;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(mp.find(key)!=mp.end()){
            Node* n=mp[key];
            n->val=value;
            remove(n);
            insert(n);
            return;
        }
        else if(mp.size()<cap){
            Node* n=new Node(key,value);
            mp[key]=n;
            insert(n);
            return;
        }else{
            Node* n=new Node(key,value);
            Node* lru = left->next;
            remove(lru);
            mp.erase(lru->key);
            insert(n);
            mp[n->key]=n;
            delete lru;
            return;
        }
    }
};
