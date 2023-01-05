#include<iostream>

using namespace std;


main()
 {
	int size;
	int pipe1;
	int pipe2;
	float time;
	float volume1;
	float volume2;
	float total;
	int v1;
	int v2;
	float ans;
	

	cout << "Enter the size of pool :";
	cin >>size;
	cout << "Enter flow rate of 1st pipe :";
	cin >>pipe1;
	cout << "Enter flow rate of 2nd pipe :";
	cin >>pipe2;
	cout << "Enter the total time :";
	cin >>time;

	volume1 = pipe1*time;
	volume2 = pipe2*time;
	total = volume1 + volume2;


		if(total < size)
		  {
			cout << "The pool is not filled yet!!!" << endl;
			v1 = (volume1/total)*100;
			cout << "The contribution of 1st pipe is "<< v1 << endl;
			v2 = (volume2/total)*100;
			cout << "The contribution of 2nd pipe is "<< v2 << endl;
			cout << "The total water filled in the pool is "<<total<< " liters"; 
		   }
	
		if(total >= size)
		 { 
			cout << "The pool water has overflown!!! "<<endl;
			ans = total - size;
			cout << "For "<<time<<" hours the pool overflows with "<<	ans <<" liters";					



		}

 }