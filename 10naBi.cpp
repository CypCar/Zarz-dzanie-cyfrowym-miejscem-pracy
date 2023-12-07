#include <iostream>

using namespace std;



int main()
{
	int n;
	cout << "Podaj liczbe naturalna : ";
	cin >> n;
	int tab [1000];
	int i=0;
	while (n>0)
	{
		int reszta = n % 2;
		n = n / 2;
		tab[i++]= reszta;
	}
	for (int j=i-1; j>=0; j--)
	cout << tab[j];
	cout << endl;
	getchar();
	return 0;
}
