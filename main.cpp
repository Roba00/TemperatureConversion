#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>

using namespace std;

int main(int nNumberOfArgs, char* pszArgs[])
{
    //What should I convert to?
    cout << "Program made by Roba Abbajabal, 2018." << endl;
    cout << "What temperature degree type should I convert to? (C/F): ";
    char temperatureChooser;
    cin >> temperatureChooser;

    switch (temperatureChooser)
    {
        case 'F':
            // enter the temperature in celsius
            int celsiusIn;
            cout << "Enter the temperature in celsius: ";
            cin >> celsiusIn;

            // convert celsius into fahrenheit values
            int fahrenheitOut;
            fahrenheitOut = celsiusIn * 9 / 5 + 32;

            // output the results (followed by a NewLine)
            cout << "Fahrenheit value is: ";
            cout << fahrenheitOut << endl;
            break;

        case 'C':
            int fahrenheitIn;
            cout << "Enter the temperature in Fahrenheit: ";
            cin >> fahrenheitIn;

            // convert celsius into fahrenheit values
            int celsiusOut;
            celsiusOut = (fahrenheitIn - 32) * 5/9;

            // output the results (followed by a NewLine)
            cout << "Celcius value is: ";
            cout << celsiusOut << endl;
            break;

        default:
            cout << "Please type one of the characters, C or F. Shutting down...";
            break;
    }

    // wait until user is ready before terminating program to allow the user to see the program results
    system("PAUSE");
    return 0;
}