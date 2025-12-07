#include <iostream>
#include "Heap.hpp"
using namespace std;

int main() {
	// Just a test to create a node
	node a(10,"Sample Task");
	cout << "Node created with key: " << a.key << " and Taskname: " << a.Taskname << endl << a.left << endl <<a.right<< endl<<a.child << endl<< a.degree << endl;
	return 0;
}