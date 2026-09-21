#include <iostream>
using namespace std;
int main() {
    int day;
    cout << "Enter the day number (1-7): ";
    cin >> day;
    switch(day){
            case 1:
            cout << "Sunday" << endl;
            break;  //if conditions are met the break keyword helps to exits the switch.
            case 2:
            cout << "Monday" << endl;
            break;

            case 3:
            cout << "Tuesday" << endl;
            break;

            case 4:
            cout << "Wednesday" << endl;
            break;

            case 5:
            cout << "Thursday,in this day your likhit exam is taken" << endl;
            break;

            case 6:
            cout << "Friday" << endl;
            break;

            case 7:
            cout << "Saturday" << endl;
            break;
            default:  //it executes when no cases are met
            cout << "Invalid day number" << endl;


    }
    return 0;
}
