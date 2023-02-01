#include "MoniCard.h"
#include <iostream>

class Node {

	private:

		MoniCard* dataCard;
		Node* nextNode;
		Node* beforeNode;

	public:

		Node(MoniCard*, Node*, Node*);
		~Node();
		void  setData(MoniCard* );
		MoniCard* getDataCard();
		void setNextNode(Node* next);
		Node* getNextNode();
		void setBeforeNode(Node* );
		Node* getBeforeNode();
		string toString();
	};