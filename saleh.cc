
#include <iostream>
#include <algorithm>
using namespace std;


struct Node {
    char data;
    Node *left=NULL;
    Node *right = NULL;
    Node(char new_data)
    {data = new_data;}

};

//if (c == EOF) break;


class Tree {
    public:
        Tree(){};
        Node *head= NULL;

        void insert(Node *temp, char data1){
            if (! head) {
                Node *temp1 = new Node(data1);
                head = temp1;
                return;
            }
            else if (data1 == temp->data)
                return;
            else if (data1 < temp->data){
                if (temp->left == NULL){
                    Node *temp1 = new Node(data1);
                    temp-> left = temp1;
                    return;
                }
                insert(temp->left,data1);
            }
            else if (data1 > temp -> data) {
                if (temp -> right == NULL) {
                    Node *temp1 = new Node(data1);
                    temp -> right = temp1;
                    return;
                }
                insert(temp -> right,data1);
            }
        }

        bool find(char data1){
            Node *temp = head;
            while (temp != NULL){
                if (temp->data == data1)
                    return true;
                else if (data1 < temp -> data)
                    temp = temp->left;
                else if (data1 > temp -> data)
                    temp = temp -> right;
            }
            return false;
        }
        void  print(char data1){
           Node *temp = head;
            while (temp != NULL){
                if (temp->data == data1){
                    cout << "Found " << data1 << ". Retrace your steps to the entrance." << endl;
                    return;
                }
                else if (data1 < temp -> data){
                    cout << "Take the left door at the " << temp->data << "." << endl;
                    temp = temp->left;
                }
                else if (data1 > temp -> data){
                    cout << "Take the right door at the " << temp->data << "." << endl;
                    temp = temp -> right;
                }
            }
            return;
        }
};
                                              
          
                                             
