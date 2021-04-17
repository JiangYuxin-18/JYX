#include <iostream>
#include <string>
using namespace std;

class Cfee {
public:
	Cfee(int bCar, int sCar) :bCar(bCar), sCar(sCar) {
	}
	void print() {
		cout << bCar*10+sCar*5 << endl;
	}
private:
	int bCar;
	int sCar;
};

int main() {
	Cfee c1(3, 2);
	c1.print();

	return 0;
}