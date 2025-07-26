//deleting last item from a linked list 
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

class List{
    public:
    Node* head;
    Node* tail;

    List(){
        head = tail = NULL;
    }

    void insert_at_last(int value){
        Node* newNode = new Node(value);
        if(head == NULL){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void delete_last(){
        Node* temp = head;
        while(temp->next->next != NULL){
            temp = temp->next;     
        }
        delete temp->next;
        temp->next = NULL;
        tail = temp;
    }

    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    List ll;
    ll.insert_at_last(1);
    ll.insert_at_last(2);
    ll.insert_at_last(3);
    cout << "Original list: ";
    ll.print();  // 3 -> 2 -> 1 -> NULL

    ll.delete_last();  // deletes 3
    cout << "After deleting front: ";
    ll.print();  // 2 -> 1 -> NULL

    ll. insert_at_last(4);   // inserts 4 at front
    cout << "After inserting 4 at front: ";
    ll.print();  // 4 -> 2 -> 1 -> NULL

    return 0;
}