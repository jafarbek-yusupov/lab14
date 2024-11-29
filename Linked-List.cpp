#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

void append(Node* head, int data){
    Node* newNode = new Node(data);
    Node* crnt = head;
    while(crnt->next != nullptr){
        crnt = crnt->next;
    }
    crnt->next = newNode;
}

void print(Node* head){
    Node* tmp = head;
    while(tmp->next != nullptr){
        cout << tmp->data << " -> "; // print current data
        tmp = tmp->next; // move to next node
    }
    cout << "nullptr" << endl;
}

int main(){
    Node* head = new Node(1);
    append(head, 3);
    append(head, 23);
    append(head, 99);
    append(head, 222);
    print(head);
}



// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */

// void trimLeftTrailingSpaces(string &input) {
//     input.erase(input.begin(), find_if(input.begin(), input.end(), [](int ch) {
//         return !isspace(ch);
//     }));
// }

// void trimRightTrailingSpaces(string &input) {
//     input.erase(find_if(input.rbegin(), input.rend(), [](int ch) {
//         return !isspace(ch);
//     }).base(), input.end());
// }

// vector<int> stringToIntegerVector(string input) {
//     vector<int> output;
//     trimLeftTrailingSpaces(input);
//     trimRightTrailingSpaces(input);
//     input = input.substr(1, input.length() - 2);
//     stringstream ss;
//     ss.str(input);
//     string item;
//     char delim = ',';
//     while (getline(ss, item, delim)) {
//         output.push_back(stoi(item));
//     }
//     return output;
// }

// ListNode* stringToListNode(string input) {
//     // Generate list from the input
//     vector<int> list = stringToIntegerVector(input);

//     // Now convert that list into linked list
//     ListNode* dummyRoot = new ListNode(0);
//     ListNode* ptr = dummyRoot;
//     for(int item : list) {
//         ptr->next = new ListNode(item);
//         ptr = ptr->next;
//     }
//     ptr = dummyRoot->next;
//     delete dummyRoot;
//     return ptr;
// }

// void prettyPrintLinkedList(ListNode* node) {
//   while (node && node->next) {
//       cout << node->val << "->";
//       node = node->next;
//   }

//   if (node) {
//     cout << node->val << endl;
//   } else {
//     cout << "Empty LinkedList" << endl;
//   }
// }

// int main() {
//     string line;
//     while (getline(cin, line)) {
//         ListNode* head = stringToListNode(line);
//         prettyPrintLinkedList(head);
//     }
//     return 0;
// }
