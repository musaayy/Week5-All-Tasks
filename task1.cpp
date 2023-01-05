#include <iostream>
#include <cmath>

 using namespace std;
float calcheight(float num1, float angle); 


 main()
  { 
	float num1;
	float angle;
	float height;
	cout << "Enter base of the TRIANGLE :";
	cin >> num1;
	cout <<"Enter the angle elevated :";
	cin >> angle;
	
	height = calcheight(num1, angle);
	cout << "The height will be :"<<height;
 }


float calcheight(float num1, float angle) 
  {
	float height =num1*(tan(angle*(3.14159/180)));
	return height;
	
  }