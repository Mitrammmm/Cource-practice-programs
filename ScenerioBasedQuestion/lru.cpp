// #include<bits/stdc++.h>
#include <iostream>
#include<unordered_map>
class LRUCache {
public:
    class Node{
        public:
            int key;
            int val;
            Node* prev;
            Node* next;

            Node(int key,int val){
                this->key = key;
                this->val = val;
            }
    };

    Node* head = new Node(-1,-1);    //dummy H & T , tki edge cases s bch ske
    Node* tail = new Node(-1,-1);

    int size;
    unordered_map<int,Node*> mp;          //map <key, Node* {reference} >


    LRUCache(int capacity) {
        size = capacity;
        head -> next = tail;
        tail->prev = head; 
    }
    
    void insertAfterHead(Node* node){
        Node* temp = head->next;
        node->next = temp;
        temp->prev = node;

        node->prev = head;
        head->next = node;
    }
    void deleteNode(Node* node){
        Node* ange = node->next;
        Node* pichhe = node->prev;

        pichhe->next = ange;
        ange->prev = pichhe;

        // (node->prev)->next = node->next->next;
        // (node->next)->prev = node->prev->prev;     
    }


    int get(int key) {
        if(mp.find(key) != mp.end()){
            Node* refnode = mp[key];
            int value = refnode->val;

            deleteNode(refnode);
            insertAfterHead(refnode);

            mp[key] = head->next; //new address 
            return value;
        }

        return -1;
    }

    void put(int key, int value) {
        if(mp.find(key) != mp.end()){
            Node* refnode = mp[key];
            deleteNode(refnode);
            mp.erase(key);
        }

        if(mp.size() == size){
            Node* lastNode = tail->prev;
            deleteNode(lastNode);
            mp.erase(lastNode->key);
        }

        Node* newNode = new Node(key, value);
        insertAfterHead(newNode);
        mp[key] = newNode;
    }
    
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */