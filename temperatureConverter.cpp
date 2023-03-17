#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int temp;
    char unit;

    cout << "************* Temperature conversion *************" << endl;
    cout << "F = fahrenheit" << endl;
    cout << "C = Celsius" << endl;
    cout << "What unit would you like to convert to" << endl;
    cin >> unit;

    if(unit == 'F' || unit == 'f') {
        cout << "Enter the temperature in Celsius" << endl;
        cin >> temp;

        temp = (1.8 * temp) + 32.0;
        cout << "Temperature is: " << temp << "F" << endl;
    }
    else if(unit == 'C' || unit == 'c') {
        cout << "Enter the temperature in Fahrenheit" << endl;
        cin >> temp;

        temp = (temp - 32) / 1.8;
        cout << "Temperature is: " << temp << "C" << endl;
    }
    else {
        cout << "PLease only enter either C or F" << endl;
    }
}