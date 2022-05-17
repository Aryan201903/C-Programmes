//
//  main.cpp
//  usingrecursion
//
//  Created by Aryan Rawat on 10/04/22.
//

#include <iostream>
using namespace std;

int calculatePower(int, int);

int calculatePower(int base, int power)
{
    if (power != 0)
        return (base*calculatePower(base, power-1));
    else
        return 1;
    
}

int main()
{
    int base, power, result;

    cout << "Enter base number: ";
    cin >> base;

    cout << "Enter power number: ";
    cin >> power;

    result = calculatePower(base, power);
    cout << base << "^" << power << " = " << result;
    
    cout<<endl;

    return 0;
}


