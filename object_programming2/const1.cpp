#include<iostream>

using namespace std;

class Circle {
private:
	int raduis;

public:
	Circle():raduis(10){}
	~Circle() {  }
	void setRaduis(int raduis) { this->raduis = raduis; }
	int getRaduis() const { return raduis; }
};

int main() {

	Circle* p = new Circle;
	const Circle* pConstObj = new Circle;
	Circle* const pConstPtr = new Circle;

	cout << "pRect->r: " << p->getRaduis() << endl;
	cout << "pObj->r: " << pConstObj->getRaduis() << endl;
	cout << "pPtr->r: " << pConstPtr->getRaduis() << endl;

	p->setRaduis(30);
	pConstPtr->setRaduis(30);

	cout << "pRect->r: " << p->getRaduis() << endl;
	cout << "pObj->r: " << pConstObj->getRaduis() << endl;
	cout << "pPtr->r: " << pConstPtr->getRaduis() << endl;

	return 0;
}