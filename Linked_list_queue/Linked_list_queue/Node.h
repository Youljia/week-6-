#pragma once
class Node
{
public:
	Node(int, Node*);
	Node(int);
	Node();
	~Node();
public:
	int e;
	Node* next;
};

