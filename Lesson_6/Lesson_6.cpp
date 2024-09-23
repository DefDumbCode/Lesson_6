#include <iostream>
#include <windows.h>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int a = 5, b = 4, c = 3;

	//cout << boolalpha << endl;
	//cout << (a > 10) << endl;

	if (c == 3) 
	{
		if (b == 4) 
		{
			if (a == 5) 
			{
				cout << "c = " << c << endl;
			}
			cout << "b = " << b << endl;
		}
		cout << "a = " << a << endl;
	}
	
}