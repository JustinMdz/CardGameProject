#include "MoniCard.h"
#include <iostream>
#include <sstream>

class Node {

	public:
		
		MoniCard* dataCard;
		Node* nextNode;
		Node* lastNode;
		Node();
		Node(MoniCard*, Node*, Node*);
		~Node();

		void  setData(MoniCard* ptrDataCard);
		MoniCard* getDataCard();

		void setNextNode(Node* next);
		Node* getNextNode();

		void setLastNode(Node* last);
		Node* getLastNode();
};