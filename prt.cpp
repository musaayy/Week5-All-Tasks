#include <iostream>
#include <cmath>

using namespace std;



main()

 {
	float number1;
	float number2;
	float total;
	
	cout << "Enter Number : ";
	cin >> number1;
	cout << "Enter number : ";
	cin >> number2;
	
	total=max(number1, number2);
 	cout << total << " is greater number !!!!" <<endl;

	total=min(number1,number2);
	cout << total << " is minimun number !!!!" <<endl;

	total = sqrt(number1);
	cout << "Square Root of the Number is : "<< total <<endl;
	total = pow(number1,number2);
	cout << "Your result is : " << total <<endl;

	total = cbrt(number1);
	cout << "Cube Root of then number is : "<<total<<endl;

	total = ceil(number1);
	cout << "Your answer after Roundingoff the number : "<<total <<endl;

	total = floor(number1);
	cout << "Your answer after removing the number : "<<total <<endl;
	

	



  }