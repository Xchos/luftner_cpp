#include <iostream>
using namespace std;

int main()
{
	int count = -1;
	cout << "vstup:\n";
	do {
		cin >> count;
	} while(count < 0 || count > 20);
	cout << "výstup:\n";
	for(int i = 1;i<count;i++) {
		cout << i << " "; 
		for(int j=0;j<i;j++) {
			cout << ".";
		}
		cout << "\n";
	}
	return 0;
}
