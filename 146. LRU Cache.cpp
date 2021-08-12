class node{
    public:
    int key;
    int value;
    node *next;
    node *prev;
    node(int k,int v){
        key = k;
        value = v;
    }
};
void del(node *todel){
    node *pre = todel->prev;
    node *nex = todel->next;
    pre->next = nex;
    nex->prev = pre;
}
map<int,node*> mp;
class LRUCache {
public:
    int c;
    node *head,*tail;
    LRUCache(int capacity) {
        head = new node(0,0);
        tail = new node(0,0);
        head->next = tail;
        tail->next = NULL;
        head->prev = NULL;
        tail->prev = head;
        c= capacity;
        mp.clear();
    }
    
    int get(int key) {
        auto itr = mp.find(key);
        if(itr==mp.end()){return -1;}
        else{
            int k = itr->second->key;
            int v = itr->second->value;
            del(itr->second);
            node *temp = new node(k,v);
            itr->second = temp;
            temp->next = head->next;
            temp->prev = head;
            temp->next->prev=temp;
            head->next = temp;
            return v;
        }
    }
    
    void put(int key, int value) {
        auto itr = mp.find(key);
        if(mp.size()>=c && itr==mp.end()){
            mp.erase(tail->prev->key);
            del(tail->prev);
        }else if(mp.size()>c){
            mp.erase(tail->prev->key);
            del(tail->prev);
        }
        if(itr==mp.end()){
            node *temp = new node(key,value);
            mp.insert({key,temp});
            temp->next = head->next;
            temp->prev = head;
            temp->next->prev = temp;
            head->next = temp;            
        }else{
            del(itr->second);
            node *temp = new node(key,value);
            itr->second = temp;
            temp->next = head->next;
            temp->prev = head;
            temp->next->prev=temp;
            head->next = temp;            
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */