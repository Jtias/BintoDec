/*

Write a function that returns a decimal number from a binary string

Major Variable

string b

Progress limitation: N/A
*/
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int bin2dec(const string&);

int main()
{
	string b;
	cout << "Enter a binary number: " << endl;
	cin >> b;
	cout << "The Decimal equivalent number: " << bin2dec(b) << endl;

	return 0;
}
int bin2dec(const string& binarystring)
{
	int num;
	std::istringstream iss(binarystring);
	iss >> num;
	if (!iss.good()) {
	}
	int dec_value = 0;

	int base = 1;

	int temp = num;
	while (temp) {
		int last_digit = temp % 10;
		temp = temp / 10;

		dec_value += last_digit * base;

		base = base * 2;
	}

	return dec_value;
	
}