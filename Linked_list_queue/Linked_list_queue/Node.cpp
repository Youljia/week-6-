#include "Node.h"
#include<iostream>
using namespace std;

Node::Node(int e, Node* node)
{
	this->e = e;
	this->next = node;
}
Node::Node(int e)
{
	this->e = e;
	this->next = NULL;
}
Node::Node()
{
	this->e = NULL;
	this->next = NULL;
}
Node::~Node()
{
	cout << "This node is releasing... ... " << endl;
	if (next == nullptr)
	{
		delete next;
		next = NULL;
	}
}