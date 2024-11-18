#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1, Node* next1, Node* back1) {
        data = data1;
        next = next1;
        back = back1;
    }

    public:
    Node(int data1) {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* convertArrToDLL(vector<int> arr) {
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }

    return head;
}

void displayLL(Node* head) {
    Node* temp = head;
    while(temp->next != NULL) {
        // cout << temp->data << "\n";
        temp = temp->next;
    }

    //printing in reverse order
    Node* tail = temp;
    while(tail) {
        cout << tail->data << "\n";
        tail = tail->back;
    }
}

int main() {
    vector<int> arr = {1,3,2,4};

    Node* head = convertArrToDLL(arr);
    displayLL(head);


    return 0;
}