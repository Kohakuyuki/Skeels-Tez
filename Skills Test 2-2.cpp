#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int N, n, Ans;

	cout << "Enter a number: "; cin >> N;

	for(n=1; n<=10; n++)
	{
	cout << n << " * " << N << "= " << N*n << endl;
	continue;

	}

	getch();
	return 0; 
}