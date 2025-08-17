#include <iostream>

class Node {
    public:
        int data;
        Node* next;
};

class LinkedList {
    private:
        Node *head;
        Node *tail;
    public:
        LinkedList() {
            head = NULL;
            tail = head;
        }

        // insert at the beginning

        void insert(int data) {
            Node* newNode = new Node();
            newNode->data = data;
            newNode->next = head;    
            head = newNode;
        } 


        // insert at the end 
/*         void insert(int data) {
            Node* newNode = new Node();
            newNode->data = data;
            if (head == NULL) {
                head = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
                tail->next = NULL;
            }
        } */
        
        void print() {
            Node* current = head;
            while (current!= NULL) {
                std::cout << current->data << " ";
                current = current->next;
            }
            std::cout << std::endl;
        }
};

int main() {
    LinkedList list;
    for(int i=0; i<10; i++) {
        list.insert(i);
    }
    list.print();   



    return 0;
}