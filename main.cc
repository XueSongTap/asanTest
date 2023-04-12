#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	vector<int> test;

	test.push_back(0);
	test.push_back(0);

	int aa = test[10];
	cout << "read_map start, threadid: " << to_string(aa) << endl;
}
