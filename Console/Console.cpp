#include "pch.h"
#include <iostream>
using namespace std;

extern "C" int mAdd();

int main()
{
	cout << "La suma es: " << mAdd() << endl;
	system("PAUSE");
	return 0;
}