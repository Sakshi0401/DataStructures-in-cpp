#include <bits/stdc++.h>
using  namespace std;
stack <int> s;
int x,ch;
void showstack(stack <int> s) 
{ 
	while (!s.empty()) 
	{ 
		cout << '\t' << s.top(); 
		s.pop(); 
	} 
	cout << '\n'; 
} 
int main()
{
	
	
	cout<<"Program to implement stack in C++."<<endl;
	do{
		cout<<endl<<"1.Print stack  2.Push  3.Pop  4.Exit"<<endl<<"Enter choice"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"The Stack is:"<<endl;
				showstack(s);
				break;
			case 2:
				cout<<"Enter value:"<<endl;
				cin>>x;
				s.push(x);
				break;
			case 3:
				s.pop();
				break;
			case 4:
				exit(0);break;
				
		}	
	
		
	}while(true);
	
}

