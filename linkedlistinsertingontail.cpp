//inserting element at tail 
#include<iostream>
#include<vector>
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

    void insertatTail(int value){
        Node* newNode = new Node(value);
        if(head == NULL){
            head = tail = newNode;
        }else{
        tail->next = newNode;
        tail = newNode;
        }
    }

    void print(){
        Node* temp = head;
        while(temp != NULL){
        cout << temp->data << "->" ;
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

};

int main(){
    List ll;
    ll.insertatTail(1);
    ll.insertatTail(2);
    ll.insertatTail(3);

    ll.print();
    return 0;
}
