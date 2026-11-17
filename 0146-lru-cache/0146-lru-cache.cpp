class LRUCache {
public:
    class Node{
        public:
            Node* next;
            Node* prev;
            int key,val;
            Node(int k,int v){
                key=k;
                val=v;
                next=prev=NULL;
            }
    };
    Node* head=new Node(-1,-1);
    Node* tail=new Node(-1,-1);

    unordered_map<int,Node*> m;

    int limit;
    //insert at head->next
    void addNode(Node* newNode){
        Node* nextNode=head->next;
        head->next=newNode;
        nextNode->prev=newNode;
        newNode->prev=head;
        newNode->next=nextNode;
    }
    void delNode(Node* oldNode){
        Node* oldNodePrev=oldNode->prev;
        Node* oldNodeNext=oldNode->next;
        oldNodePrev->next=oldNodeNext;
        oldNodeNext->prev=oldNodePrev;
    }
    LRUCache(int capacity) {
        limit=capacity;
        head->next=tail;
        tail->prev=head;
    }
    
    int get(int key) {
        if(m.find(key)==m.end()) return -1;
        int ans=m[key]->val;
        Node* ansNode=m[key];
        m.erase(key);
        delNode(ansNode);
        addNode(ansNode);
        m[key]=ansNode;
        return ans;
    }
    
    void put(int key, int value) {
        //if key is already present then delete it
        if(m.find(key)!=m.end()){
            Node* oldNode=m[key];
            delNode(oldNode);
            m.erase(key);
        }
        //capacity reach
        if(m.size()==limit){
            m.erase(tail->prev->key);
            delNode(tail->prev);
        }
        Node* newNode=new Node(key,value);
        addNode(newNode);
        m[key]=newNode;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */