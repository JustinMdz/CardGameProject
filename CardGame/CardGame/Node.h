#include <iostream>
#include <sstream>

class Node {

public:

	int dataCard;
	Node* nextNode;
	Node* lastNode;

	Node(int);
	//Node(MoniCard*, Node*);
	void  setData(int);
	int getDataCard();

	void setNextNode(Node* next);
	Node* getNextNode();

	void setLastNode(Node* next);
	Node* getLastNode();

};