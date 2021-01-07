// Abstract Classes - Polymorphism in C++
class LRUCache: public Cache
{
public:
    LRUCache(int c) 
    {
      cp = c;
    }

    void set(int k, int v) 
    {
        Node* N;

        if ( mp.empty() ) 
        {

            N = new Node(k,v);
            tail = head = N;
            mp[k] = N;

            return;
        }
        auto it = mp.find(k);
        if ( it != mp.end() ) 
        {
            it->second->value = v;
            if ( head == it->second ) 
            {
                return;
            }
            it->second->prev->next = it->second->next;           
            if ( tail == it->second ) 
            {
                tail = tail->prev;
            }
            else 
            {               
                it->second->next->prev = it->second->prev;
            }           
            it->second->next = head;
            it->second->prev = nullptr;
            head->prev = it->second;
            head = it->second;
        }
        else 
        {
            N = new Node(head->prev, head, k, v);
            head->prev = N; 
            head = N;
            mp[k] = N;
            if ( mp.size() > cp ) 
            {
                tail = tail->prev;
                mp.erase(tail->next->key);
                delete tail->next; 
                tail->next = nullptr;
            }
        }
    }
    int get(int k) 
    {
        auto it = mp.find(k);
        if ( it != mp.end() ) 
        {
            return it->second->value;
        }
        
        return -1;
    }
};
