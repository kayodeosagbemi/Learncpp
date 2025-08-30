#include <iostream>
#include <string>
#include "Reading.h"
using namespace std;
int main() {
	int systolic, diastolic, pulse;
	cout << "Enter systolic value: ";
	cin >> systolic;
	cout << "Enter diastolic value: ";
	cin >> diastolic;
	cout << "Enter pulse value: ";
	cin >> pulse;
	Reading myReading;
	myReading.setSystolic(systolic);
	myReading.setDiastolic(diastolic);
	myReading.setPulse(pulse);
	cout << "You entered: " << myReading.toString() << endl;
	return 0;
}