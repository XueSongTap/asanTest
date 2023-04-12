#include <iostream>

using namespace std;

int main(){
	int *p = new int;
	*p = 3;
	cout << *p << endl;

	delete p;
	cout << *p << endl;

	long *p1 = new long;

	*p1 = 100;

	cout << p << endl;
	cout << p1 << endl;
	*p = 23;

	cout << *p << endl;
	cout <<  *p1 << endl;

	delete p1;

	return 0;
}
