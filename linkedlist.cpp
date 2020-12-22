//FIFO linked list
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int value;
        node * pointer;
        node(){
            value = 0;
            pointer = nullptr;
        }
};
class linkedlist{
   public:
        node * root;
        linkedlist(){
            node * root {nullptr};
        }
        void addNode(int value){
            node * temp = new node();
            temp->value = value;
            if(root == nullptr){
                root = temp;
            }
            else{
                node * trav = root;
                while(trav->pointer!=nullptr){
                    trav = trav->pointer;
                }
                trav->pointer = temp;
            }
        }
        void removeNode(){
            if(root == nullptr){
                cout<<"nothing to remove\n";
                return;
            }
            else{
                node * temp = root;
                root = temp->pointer;
                delete temp;
            }
        }
        void display(){
            if(root == nullptr){
                cout <<"nothing to display\n"; 
                return;
            }
            node * trav = root;
            while(trav->pointer!=nullptr){
                cout<<trav->value<<" ";
                trav = trav->pointer;
            }
            cout<<trav->value<<"\n";
        }
        int search(int key){
            if(root == nullptr){
                cout <<"empty linked list\n"; 
                return 0;
            }
            node * trav = root;
            int pos = 1;
            while(trav->pointer!=nullptr){
                if(trav->value == key){
                    cout<<"found element at "<<pos<<" position\n";
                    return 1;
                }
                else{
                    ++pos;
                    trav = trav->pointer;
                }
            }
            if(trav->value == key){
                cout<<"found key at "<<pos<<" position\n";
                return 1;
            }
            else{
                cout<<"key not in linked list\n";
                return -1;
            }
        }
};
int main(){
    linkedlist * Root = new linkedlist();
    Root->removeNode();
    Root->addNode(10);
    Root->addNode(20);
    Root->addNode(30);
    Root->addNode(40);
    Root->addNode(50);
    Root->addNode(60);
    Root->display();
    Root->search(10);
    Root->search(30);
    Root->search(60);
    Root->search(100);
    return 0;
}