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
		systolic = systolicValue;
	}
	void setDiastolic(int diastolicValue) {
		// Add validation here if needed
		diastolic = diastolicValue;
	}
	void setPulse(int pulseValue) {
		// Add validation here if needed
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
private:
	int systolic;
	int diastolic;
	int pulse;
};