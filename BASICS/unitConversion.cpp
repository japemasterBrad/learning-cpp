#include <iostream>
#include <string.h>

using namespace std;

float cmToM(float centimeters) {
    float convertedMeasurement = centimeters / 100;
    return convertedMeasurement;
}


float mToCm(float meters) {
    float convertedMeasurement = meters * 100;
    return convertedMeasurement;
}


int main() {
    float userUnit;
    float userMeasurement;

    cout << "What units do you want to convert?\n1) CM to M\n2) M to CM" << endl;
    cin >> userUnit;
    cout << "How many do you want to convet?" << endl;
    cin >> userMeasurement;

    if (userUnit == 1) {
        cout << userMeasurement << "cm is equal to " << cmToM(userMeasurement) << "m!" << endl;
    } else if (userUnit == 2) {
        cout << userMeasurement << "m is equal to " << mToCm(userMeasurement) << "cm!"  << endl;
    }
}