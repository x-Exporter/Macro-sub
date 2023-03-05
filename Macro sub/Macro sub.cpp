#include <iostream>

#define sub(x,y) (x-(y))

using namespace std;
	
int main()
{
	int a = 6;
	int b = 5;
	int c = 2;
	cout << sub(a, b) << endl;
	cout << sub(a, b) * c << endl;
	cout << sub(a, b + c) * c << endl;
}

