#include "Node.h"

Node::Node(MoniCard* data = NULL, Node* next = NULL, Node* last=NULL) {
	dataCard = data;
	nextNode = next;
	lastNode = last;
}

Node::~Node() {
	delete dataCard;
}

void Node::setData(MoniCard* ptrDataCard) {
	dataCard = ptrDataCard;
}

MoniCard* Node::getDataCard() {
    return dataCard;
}

void Node::setNextNode(Node* next) {
    nextNode = next;
}

Node* Node::getNextNode() {
    return nextNode;
}











