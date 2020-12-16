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

class Calculator {
public:
	void setX(float x) {
		z = x;
	};
	void setY(float y) {
		a = y;
	};

	void setOp(string op) {
		ope = op;
	};

	float getX() {
		return z;
		
	};

	float getY() {
		return a;
		
	};

	string getOp() {

		return ope;
	}

	float getAns() {

		return k;
	}

	void mult() {
		k = (a * z);
	}

private:
	float z;
	float a;
	float k;

	string ope;
};

float cl() {
	Calculator cal;
	//string oper;
	float x;
	float y;
	string op;
	//string ope;
	cout << "set x" << endl;
	cin >> x;
	cal.setX(x);
	cout << "set y" << endl;
	cin >> y;
	cal.setY(y);
	cout << "set operation" << endl;
	cin >> op;
	cal.setOp(op);
	cout << cal.getOp() << endl;
	cal.mult();
	cout << cal.getAns() << endl;



		main();
};

float calc() {
	float y;
	float x;
	string oper;
	cout << "enter number four function operation number" << endl;
	cin >> y >> oper >> x;
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
	//float i;
	//float j;
	string op;
	cout << "calc downloads or exit?" << endl;
	cin >> cord;
	if (cord == "calc")
		calc();

	else if (cord == "downloads")
		con();

	else if (cord == "class")
		cl();

	else
		return 1;
}