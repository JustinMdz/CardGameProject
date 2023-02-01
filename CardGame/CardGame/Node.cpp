#include "Node.h"

Node::Node(MoniCard* data = NULL, Node* next = NULL, Node* before=NULL) {
	dataCard = data;
	nextNode = next;
	beforeNode = before;
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











