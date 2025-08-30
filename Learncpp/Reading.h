#include <iostream>
#include <string>
using namespace std;
class Reading
{
public:
	Reading() {
		setSystolic(0);
		setDiastolic(0);
		setPulse(0);
	}
	Reading(int systolicValue, int diastolicValue, int pulseValue) {
		setSystolic(systolicValue);
		setDiastolic(diastolicValue);
		setPulse(pulseValue);
	}
	void setSystolic(int systolicValue) {
		// Add validation here if needed
		if (systolicValue < 0) {
			systolicValue = 0; // or throw an exception
		}
		systolic = systolicValue;
	}
	void setDiastolic(int diastolicValue) {
		// Add validation here if needed
		if (diastolicValue < 0) {
			diastolicValue = 0; // or throw an exception
		}
		diastolic = diastolicValue;
	}
	void setPulse(int pulseValue) {
		// Add validation here if needed
		if (pulseValue < 0) {
			pulseValue = 0; // or throw an exception
		}
		pulse = pulseValue;
	}
	int getSystolic() {
		return systolic;
	}
	int getDiastolic() {
		return diastolic;
	}
	int getPulse() {
		return pulse;
	}
	string toString() {
		return "Systolic: " + to_string(systolic) + ", Diastolic: " + to_string(diastolic) + ", Pulse: " + to_string(pulse);
	}

	void persist() {
		// Code to save the reading to a file or database
		cout << "Persisting reading: " << toString() << endl;
	}
private:
	int systolic;
	int diastolic;
	int pulse;
};