//Program to Implement Stack using C++ STL.
#include <bits/stdc++.h>
using  namespace std;
stack <int> s; //declare stack
int x,ch;
void showstack(stack <int> s) 
{ 	//function to print stack.
	while (!s.empty()) 
	{ 
		cout << '\t' << s.top();	//print value from top of stack
		s.pop();	//pop value from top of stack 
	} 
	cout << '\n'; 
} 
int main()
{
	cout<<"Program to implement stack in C++."<<endl;
	do{
		cout<<endl<<"1.Print stack  2.Push  3.Pop  4.Exit"<<endl<<"Enter choice"<<endl;
		cin>>ch;	//enter choice
		switch(ch)
		{
			case 1:
				cout<<"The Stack is:"<<endl;
				showstack(s); 	//function call 
				break;
			case 2:
				cout<<"Enter value:"<<endl;
				cin>>x;
				s.push(x);	//push value of x inside stack
				break;
			case 3:
				s.pop();	//pop value from top of stack
				break;
			case 4:
				exit(0);break;	//exit from program
				
		}	
	
		
	}while(true);
	
}

