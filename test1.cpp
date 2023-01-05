#include <iostream>
using namespace std;
int add (int number1, int number2);
float divide (int number1, int number2);
int isGreater(int number1,int number2);


main()
{
	int number1;
	int number2;
	int total;
	float di;
	float grt;
	cout << "Enter Number : ";
	cin >> number1;
	cout << "Enter Number : ";
	cin >> number2;
	total = add (number1, number2);
	cout << "Total is : " << total <<endl;
	di = divide ( number1, number2);
	cout << "Division result is : "<<di;
	grt = isGreater(number1, number2);
	cout << "Greater number is : "<<grt;

}  

int add (int number1, int number2)
 {
	int sum = number1 + number2;
	return sum;


 }
float divide (int number1, int number2)
  { 
	float div=number1 / number2;
	return div;
  }


int isGreater(int number1,int number2)
  {
	if ( number1<number2)
	  { 
 		return number2;	
	   }
	if ( number1 > number2)
	  { 
           return number1;
        }



  }