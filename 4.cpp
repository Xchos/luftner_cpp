#include <iostream>
using namespace std;

int main()
{
	int count = -1;
	cout << "vstup:\n";
	do {
		cin >> count;
	} while(count < 0 || count > 10);
	cout << "výstup:\n";
	int number = 0;
	for(int i = 0;i<count;i++) {
		for(int j=0;j<count;j++) {
			number++;
			if(i>=j) cout << number;
			cout << "\t";
		}
		cout << "\n";
	}
	return 0;
}
