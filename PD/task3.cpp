#include <iostream>

using namespace std;

float taxCalculation(char type, int price);

main()
{
    int price;
    char type;
    float final;
    cout << "Enter the price : ";
    cin >> price;
    cout << "Enter the type : ";
    cin >> type;
    final = taxCalculation(type, price);
    cout << "The price of the vehicle of type " << type << " is " << final;
}

float taxCalculation(char type, int price)
{
    float tax;
    if(type == 'M')
    {
        tax = 0.06;
    }
    if(type == 'E')
    {
        tax = 0.08;
    }
    if(type == 'S')
    {
        tax = 0.1;
    }
    if(type == 'V')
    {
        tax = 0.12;
    }
    if(type == 'T')
    {
        tax = 0.15;
    }
    float result = price + price * tax;
    return result;
}