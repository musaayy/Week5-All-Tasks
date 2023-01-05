#include <iostream>

using namespace std;
int numb(int number);
main()
 {
	int num;
	int number;
	int number2;
	cout << "Enter a number :";
	cin >> num;
	number=num%10;
	cout<<endl;
	number2=num/10;
	

	if(number2==2)
	{ 
		cout<< num<<" twenty";
		
		numb(number);
	}
	if(number2==3)
	{ 
		cout<< num<<" thirty";
		
		numb(number);
	}
	if(number2==4)
	{ 
		cout<< num<<" forty";
		
		numb(number);
	}
	if(number2==5)
	{ 
		cout<< num<<" fifty";
		
		numb(number);
	}
	if(number2==6)
	{ 
		cout<< num<<" sixty";
		
		numb(number);
	}
	if(number2==7)
	{ 
		cout<< num<<" seventy";
		
		numb(number);
	}
	if(number2==8)
	{ 
		cout<< num<<" eighty";
		
		numb(number);
	}
	if(number2==9)
	{ 
		cout<< num<<" ninty";
		
		numb(number);
	}
	
	
	



}



int numb(int number)
 {

		  if(number==1)
		{		
			cout<<"one";
		}
		  if(number==2)
		{
			cout<<"two";
		}
		  if(number==3)
		{
			cout<<"three";
		}
		  if(number==4)
		{
			cout<<"four";
		}
		  if(number ==5)
		{
			cout <<"five";
		}
		  if(number ==6)
		{
			cout <<"six";
		}	
		  if(number==7)
		{
			cout<<"seven";
		}
		  if(number==8)
		{
			cout<<"eight";
		}
		  if(number==9)
		{
			cout<<"nine";
		}
 }




