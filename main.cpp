#include<iostream>
using namespace std;
#define ASCII
//#define FACTORIAL
//#define DEGREE

void main() 
{

	setlocale(LC_ALL, "");
#ifdef ASCII


	for (int i = 0;
		i < 256;
		i++)
	{
		cout << i << " - "  << char(i) << "\t";

	}
#endif // ASCII
	
#ifdef FACTORIAL


	int n;
	int factorial=1;
	cout << "¬ведите число "; cin >> n;

	for (int i = 1; i <= n; i++)
	{
		factorial*= i;
	}
	cout << "‘акториал числа " << n <<"\t"; cout << factorial;
#endif // FACTORIAL

#ifdef DEGREE

	int number;
	int degree;
	cout << "¬ведите число возводимое в степень " ; cin >> number;
	cout << "¬ведите степень " ; cin >> degree;
	int result=number;
	

	for ( int i = 1; i < degree; i++)
	{
		result = result * number;

	
	}
	cout << result;

#endif // DEGREE
}