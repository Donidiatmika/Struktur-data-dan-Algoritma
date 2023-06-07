#include <iostream>
#include "BinaryTree.h"

using namespace std;
// implementasikan search node, find min, find max.
int main(int argc, char** argv) {
	
	BinaryTree bin;
	
	bin.insertNode(10);
	bin.insertNode(5);
	bin.insertNode(3);
	bin.insertNode(2);
	bin.insertNode(6);
	bin.insertNode(15);
	bin.insertNode(20);
	
	cout << endl << "\t Taversal";
	cout << endl << " InOrder : ";
	bin.inOrder();
	
	cout << endl << " PreOrder : ";
	bin.preOrder();
	
	cout << endl << " PostOrder : ";
	bin.postOrder();
	
	cout <<"\n" << endl << "\t Max Value : \n";
	bin.findMax();
	
	cout <<"\n" << endl << "\t Min Value : \n";
	bin.findMin();
	
	cout <<"\n" << endl << "\t SearchNode";
	int searchNode;
	cout << "\n Masukan Node :";
	cin >> searchNode;
	bin.searchNode(searchNode);
	
	return 0;
}