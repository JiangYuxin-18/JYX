#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class shaizi {
public:
	int getdian() {
		srand(time(0));
		dian = rand() % 6 + 1;
		return dian;
	}
private:
	int dian;
};

int main() {
	shaizi s;
	cout << s.getdian() << endl;
	return 0;
}