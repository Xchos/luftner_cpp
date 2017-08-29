#include <iostream>
using namespace std;

int main()
{
	int count = -1;
	cout << "vstup:\n";
	do {
		cin >> count;
	} while(count < 0 || count % 2 == 0);
	cout << "výstup:\n";
	for(int i = 1;i<=count/2;i++) {
		for(int j=0;j<i;j++) {
			cout << ".";
		}
		cout << "\n";
	}

	for(int i = 1;i<=1+count/2;i++){
		cout << ".";
	}
	cout << "\n";

        for(int i = 1;i<=count/2;i++) {
                for(int j = count/2-i; j>=0; j--) {
			cout << ".";
		}
		cout << "\n";
        }
	return 0;
}
