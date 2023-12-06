#include <iostream>

using namespace std;

class Line {
public:
	int getLength(void);
	Line(int len);
	Line(const Line& obj);
	~Line();

private:
	int* ptr;
};
Line::Line(int len) {
	cout << "일반 생성자" << endl;
	ptr = new int;
	*ptr = len;
}
Line::Line(const Line& obj) {
	cout << "복사 생성자" << endl;
	ptr = new int;
	*ptr = *obj.ptr;
}
Line::~Line() {
	cout << "소멸자" << endl;
	delete ptr;
}
int Line::getLength(void) {
	return *ptr;
}
int main() {

	Line line1(10);
	Line line2 = line1;

	cout << "line1's length: " << line1.getLength() << endl;
	cout << "line2's length: " << line2.getLength() << endl;

	return 0;
}