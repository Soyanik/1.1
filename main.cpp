#include <iostream>
using namespace std;

class Road {
public:
	double length;
	int width;
	Road();
};

Road::Road() {
	length = 666.6;
	width = 6;
}

int main() {
	cout << "Test v1.1: Ok.\n";
	
	Road road;
	cout << "\nBefore access: \n";
	cout << "Length: " << road.length << endl;
	cout << "Width: " << road.width << endl;
	
	road.length = 888.8;
	road.width = 8;
	cout << "\nAfter access: \n";
	cout << "Length: " << road.length << endl;
	cout << "Width: " << road.width << endl;
	
	return 0;
}
