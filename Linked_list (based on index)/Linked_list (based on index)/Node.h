#pragma once
class Node
{
public:
	Node(int e, Node*);
	Node(int e);
	Node();
	~Node();
public:
	int e;
	Node* next;
};

