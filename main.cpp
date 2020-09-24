#include "head.h"

using nampespace std;

int main()
{
	int a, b, func;

	cout << "Hello World" << endl;

	cout << "Input first number : ";
	cin >> a;
	cout << endl << "Input second number : ";
	cin >> b;

	cout << endl << "Choose function : ";
	cin >> func;

	switch (func)
	{
	case 1:
		
		plus(a, b);
		break;
	case 2:

		minus(a, b);
		break;
	}
	system("pause");
}