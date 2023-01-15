#include<iostream>
using namespace std;

float function();

main()
{
    float x = 0;
    x = function();
    cout << "The volume of of pyramid is :" << x;
}
float function()
{	
	string unit;
	float length, width, height ,volume;
	cout << "Enter the Length in meters: ";
	cin >> length;
	cout << "Enter the Width in meters: ";
	cin >> width;
	cout << "Enter the Height in meters: ";
	cin >> height;
	cout << "Enter the unit in which you want OUTPUT=";
	cin >> unit;
	volume = (length*width*height)/3;
	if(unit=="cm")
	 {
		volume = volume * 100 * 100 * 100 ;
		return volume;
	 }
	 if(unit=="km")
	 {
		volume=volume/0.00000001;
		return volume;
	 }
	 if(unit=="mm")
	{
		volume=volume*1000*1000*1000;
		return volume;
	}		
}

 