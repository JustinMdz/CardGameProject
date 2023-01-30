#include "MoniCard.h"
#include <iostream>

class Node {

	private:

		MoniCard *dataCard;
		Node *nextNode;

	public:

		Node(MoniCard *, Node*);
		~Node();
		void  setData(MoniCard *ptrDataCard);
		MoniCard *getDataCard();
		void setNextNode(Node* next);
		Node* getNextNode();
		string toString();
	};