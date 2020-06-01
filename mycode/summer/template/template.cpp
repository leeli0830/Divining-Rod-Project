#include <iostream>
#include <string>

using namespace std;

template <typename T>
void myMax( T a, T b ) {
	T result;
	result = ( a > b ) ? a : b;
	cout << "The max of " << a << " and " << b << " is " << result << endl; 
}

int main() {
	int a = 3, b = 5;
	double c = 5.6, d = 7.3;
	string e = "donkey", f = "apple";
	
	myMax<int> (a, b);
	myMax<double> (c, d);
	myMax<string> (e, f);
}
	

