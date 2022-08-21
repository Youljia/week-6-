#include "Node.h"
# include<iostream>
using namespace std;

Node::Node(int e, Node* node)
{
	this->e = e;
	this->next = node;
}

//链表尾部
Node::Node(int e)
{
	this->e = e;
	this->next = nullptr;
}

//虚拟链表头
Node::Node()
{
	this->e = -1;
	this->next = nullptr;
}

Node::~Node()
{
	cout << "This node is releasing... ..." << endl;
	delete this->next;
}