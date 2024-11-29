#include <iostream>
using namespace std;

template <typename T>
struct Node{
    T data;
    Node<T>* next;
    Node(T data){
        this->data = data;
        this->next = nullptr;
    }
};

template <typename T>
void append(Node<T>* &head, T data){
    Node<T>* newNode = new Node<T>(data);
    if (head == nullptr){   head = newNode;} 
    else{
        Node<T>* crnt = head;
        while (crnt->next != nullptr){  crnt = crnt->next;}
        crnt->next = newNode;
    }
}

template <typename T>
void print(Node<T>* head) {
    if (head == nullptr){   cout << "List is empty" << endl;    return;}
    Node<T>* tmp = head;
    while (tmp != nullptr) {
        cout << tmp->data << " -> "; // print current data
        tmp = tmp->next; // move to the next node
    }
    cout << "nullptr" << endl;
}

int main(){
    Node<int>* head = nullptr;
    append(head, 1);
    append(head, 3);
    append(head, 43);
    append(head, 69);
    append(head, 222);
    print(head);
}
