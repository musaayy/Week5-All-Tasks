#include <iostream>

using namespace std;


main()
 {
	int hours;
	int minu;
	cout << "Enter Hour :";
	cin >> hours;
	cout << "Enter minutes :";
	cin >> minu;
	minu = minu + 15;
	
	   if(minu<59)
	    {
	   cout << hours << ":" <<minu;
	    }
	if(minu>=60)
	   {
	  minu=minu-60;
	  hours=hours+1;
	  cout << hours<< ":"<<minu;
	   }

	
 }	