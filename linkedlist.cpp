//Program to implement linkedlist in C++
#include <bits/stdc++.h>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
};
 void printLL(Node* n)		//print LinkedList
 {
 	while(n!=NULL)
 	{
 		cout<<n->data<<" ";
 		n=n->next;
	 }
 }
 int main()
 {
 	Node* first=NULL;
 	Node* second=NULL;
 	Node* third=NULL;
 	
 	first=new Node();		//create first node
 	second=new Node();		//create second node
 	third=new Node();		//create third node
 	
 	first->data=1;			//initialize first node
 	first->next=second;
 	
 	second->data=2;			//initialize second node
 	second->next=third;
 	
 	third->data=3;			//initialize third node
 	third->next=NULL;
 	
 	printLL(first);			//function call
 	 return 0;
 	
 }
