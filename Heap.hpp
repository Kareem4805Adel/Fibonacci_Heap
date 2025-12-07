#include <iostream>
using namespace std;
#include <string>
class node {
public:
    int key,degree ;
    string Taskname;
    bool mark;// to check if the node has lost a child since it became a child of another node
    node* left;
    node* right;
    node* parent;
    node* child;
    // taskname not completed
    node(int val , string Tasknamepara) : key(val), left(nullptr), right(nullptr), parent(nullptr), child(nullptr),Taskname(Tasknamepara) ,mark(false),degree(0) {
        //pointing to itself
        right = this; 
        left = this;
        

    }



};
class FibonacciHeap {
    node* insert(int key, const string &taskName);
    const node* findMin() const;
    node* extractMin();
    void decreaseKey(node* handle, int newKey);
    void deleteNode(node* handle);

};
