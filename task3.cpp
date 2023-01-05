#include <iostream>
#include <cmath>

using namespace std;
bool symmetry(int num);


main()
 
 {
	int num;
	bool a;
	
	cout << "Enter Number : ";
	cin >> num;
	a = symmetry(num);
	if (a==true)
	{
	  cout <<"Symmmetrical";
	  }
	if (a==false)
	{
	  cout << "nonsymmetrical";
	}
 }

bool symmetry(int num)
 {
	int b;
	int c;
	b=num%10;
	
	c=num/100;
	
	  if(b==c)
	{
	  return true;
	}
	  if(b!=c)
	{
 	  return false;
  	}
}