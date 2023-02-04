#include "Node.h"

Node::Node(int data) {
	dataCard = data;
	nextNode = nullptr;
	lastNode = nullptr;
}

//Node::~Node() {
//}

void Node::setData(int ptrDataCard) {
	dataCard = ptrDataCard;
}

int Node::getDataCard() {
	return dataCard;
}

void Node::setNextNode(Node* next) {
	nextNode = next;
}

Node* Node::getNextNode() {
	return nextNode;
}

void Node::setLastNode(Node* last) {
	lastNode = last;
}

Node* Node::getLastNode() {
	return lastNode;
}
