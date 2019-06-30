#include <iostream>
#include <iomanip>
using namespace std;
void main()
{
	int bath;
	cout << "Thai Bath : ";
	cin >> bath;
	cout << "***** Exchange Rate *****\n"<< endl;
	cout << bath << " Bath is "<< setprecision(6)<< bath*0.03253 << " dollars.\n";
	cout << bath << " Bath is "<< setprecision(6)<< bath*0.02857 << " Euro. \n";
}