#include <iostream>
using namespace std;

class Calculator {
public:
	static int Sum(int a, int b) = > a + b;
	static int Subtraction(int a, int b) = > a - b;
	static int Multiplication(int a, int b) = > a * b;
	static int Division(int a, int b) = > a / b;
};

int main() {
	setlocale(LC_ALL, "");

	return 0;
}