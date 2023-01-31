#include "Node.h"

Node::Node(MoniCard* ptrDataCard = NULL, Node* next = NULL) {
	dataCard = ptrDataCard;
	nextNode = next;
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











