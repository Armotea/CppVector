#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<int> data = { 1, 2, 3, 4, 5, 6 };
	for (int item : data) {
		cout << item << "\n";
	}
	cout << "--------------------\n";
	vector<string> stroke = { "meow", "cute", "ooops", "hello" };
	for (int i = 0; i < stroke.size(); ++i) {
		cout << stroke[i] << "\n";
	}
	cout << "--------------------\n";
	for (int j = 0; j < data.size(); ++j) {
		if (data[j] % 2 == 0) {
			cout << data[j] << "\n";
		}
		else {
			continue;
		}
	}
}
