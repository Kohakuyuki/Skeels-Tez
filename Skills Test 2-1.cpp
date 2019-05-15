#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int N1, N2, N3;

	cout << "Enter First Number: "; cin >> N1;
	cout << "Enter Second Number: "; cin >> N2;
	cout  << "Enter Third Number: "; cin >> N3;

	if (N1 > N2 && N1 > N3)
		cout << "The largest number of the three numbers is " << N1 << endl;

	else if (N2 > N1 && N2 > N3)
		cout << "The largest number of the three numbers is " << N2 << endl;

	else if (N3 > N1 && N3 > N2)
		cout << "The largest number of the three numbers is " << N3 << endl;


	getch();
	return 0;
}