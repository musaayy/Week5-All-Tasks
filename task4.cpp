#include <iostream>

using namespace std;
 
string evenishOddish(int number);

main()
 {
	int number;
	evenishOddish(number);

  }
string evenishOddish(int number)
 {
	int digit;
	int result;
	string x;
	
	digit=number%10;
	number=number/10;
	result=result+digit;
	
	digit=number%10;
	number=number/10;
	result=result+digit;

	digit=number%10;
	number=number/10;
	result=result+digit;
	
	digit=number%10;
	number=number/10;
	result=result+digit;
	
	result = result +number;
	if (result%2 ==0)
	 {
	  x="evenish";
	  return x;
	 }
	if (result%2==1)
 	 {
	  x="oddish";
	  return x;
 	 }
}
	

	