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
	cout << "--------------------";
	vector<string> stroke = { "meow", "cute", "ooops", "hello" };
	for (int i = 0; i < stroke.size(); ++i) {
		cout << stroke[i] << "\n";
	}
}
