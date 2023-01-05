#include <iostream>
#include <cmath>

using namespace std;
float pos(int a, int b, int c, float result2, float formula);
float neg(int a, int b, int c, float result2, float formula);

main()

 {
	int a = 5;
	int b = 6;
	int c = 1;
	float result1;
	float result2;
	float formula;
	float res1;
	float res2;

	
	res1= pos(a, b, c,result1, formula);
	res2= neg(a, b, c,result2, formula);
	

	cout<< "x = "<<res1;
	cout<<"x = "<<res2;
}


float pos(int a, int b, int c, float result1, float formula)
  {	
	formula=sqrt(pow(b,2)-4*a*c);
	result1=(-b+formula)/(2*a);
	return result1;
   }

float neg(int a, int b, int c, float result2, float formula)
  {
	formula=sqrt(pow(b,2)-4*a*c);
	result2=(-b-formula)/(2*a);
	return result2;
   }