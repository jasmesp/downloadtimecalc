
#include <iostream>

using namespace std;
int main();

float conv() {
	float g;
	cout << "enter number of gigs to download" << endl;
	cin >> g;
	float m = (g * 1024);
	cout << m << endl;
	return m;
}

float dt() {
	float t;
	cout << "enter download speed MB/s" << endl;
	cin >> t;
	float z = t / 1024;
	cout << z << endl;
	return z;
}

float calc() {
	float y;
	float x;
	string oper;
	cin >> y >> x >> oper;
	if (oper == "*")
		cout << y * x << endl;
	else if (oper == "+")
		cout << y + x << endl;
	else if (oper == "-")
		cout << y - x << endl;
	else if (oper == "/")
		cout << y / x << endl;

	main();
	return 0;
}

float con() {
	conv();
	dt();

	return 0;
}

int main()
{
	string cord;
	cout << "calc or downloads?" << endl;
	cin >> cord;
	if (cord == "calc")
		calc();

	else
		con();
	return 0;
}

