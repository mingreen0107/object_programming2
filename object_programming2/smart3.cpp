#include <iostream>
#include <memory>

using namespace std;

int main() {

	// �ϳ��� ����Ϸ��� >>> unique_ptr<int> p(new int);
	unique_ptr<int[]> buf(new int[10]);

	for (int i = 0; i < 10; i++)
		buf[i] = i;
	for (int i = 0; i < 10; i++)
		cout << i << '.' << buf[i] << endl;

	return 0;
}