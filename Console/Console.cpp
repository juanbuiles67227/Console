#include "pch.h"
#include <iostream>
using namespace std;

extern "C" int clear();

int main()
{
	cout << "La suma es: " << clear() << endl;
	system("PAUSE");
	return 0;
}