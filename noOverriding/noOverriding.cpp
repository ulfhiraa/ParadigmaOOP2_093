#include <iostream>
using namespace std;

class baseClass {
public:
	virtual void perkenalan() final {
		cout << "Hallo saya Function dari base Class";
	}
};

class derivedClass : public baseClass {
public:
	void perkenalan() {
		cout << "Hallo saya Funtion dari derived Class ";
	}
};

int main() {
	derivedClass a;
	a.perkenalan();

	return 0;
}