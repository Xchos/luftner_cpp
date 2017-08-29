#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int lower = 0;
	int upper = 0;
	int number = 0;
	char ch;
	fstream fin("text.txt", fstream::in);
	while (fin >> noskipws >> ch) {
		if(islower(ch)) lower++;
		if(isupper(ch)) upper++;
		if(isdigit(ch)) number++;
	}
	cout << "malych:  " << lower  << "\n";
        cout << "velkych: " << upper  << "\n";
        cout << "cisel:   " << number << "\n";
	
	return 0;
}
