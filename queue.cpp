//Program to implement queue in C++
#include <bits/stdc++.h>
using  namespace std;
queue <int> qu;
int x,ch;
void showqueue(queue <int> q) 
{ 
	while (!q.empty()) 
	{ 
		cout << '\t' << q.front(); 
		q.pop(); 
	} 
	cout << '\n'; 
} 
int main()
{
	
	
	cout<<"Program to implement stack in C++."<<endl;
	do{
		cout<<endl<<"1.Print queue  2.Add  3.Remove  4.size of queue  5.Exit"<<endl<<"Enter choice"<<endl;
		cin>>ch;	//enter choice
		switch(ch)
		{
			case 1:
				cout<<"The Queue is:"<<endl;
				showqueue(qu); 	//function call 
				break;
			case 2:
				cout<<"Enter value:"<<endl;
				cin>>x;
				qu.push(x);	//push value of x inside queue
				break;
			case 3: 
				if(qu.empty())		//check if queue is empty
					cout<<"Queue is empty.";
				else
					qu.pop();	//pop first element of queue
				break;
			case 4:
				cout<<qu.size();		//print size of queue
				break;
			case 5:
				exit(0);		//exit from program
				break;	
		}	
	
		
	}while(true);
	
}

