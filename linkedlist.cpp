#include <bits/stdc++.h>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
};
 void printLL(Node* n)
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
 	
 	first=new Node();
 	second=new Node();
 	third=new Node();
 	
 	first->data=1;
 	first->next=second;
 	
 	second->data=2;
 	second->next=third;
 	
 	third->data=3;
 	third->next=NULL;
 	
 	printLL(first);
 	 return 0;
 	
 }
