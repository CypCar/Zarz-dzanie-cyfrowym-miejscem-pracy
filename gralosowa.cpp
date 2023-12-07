#include <iostream>
#include <cstdlib>
#include <time.h>
 
 
using namespace std;

int liczba; 
int strzal;
int proba;

int main()
{
	system ("chcp 1250");
	
	cout <<"ELO! Pomyślałem sobie o liczbie w przedziale 1-100"<<endl;
	srand (time(NULL));
	liczba = rand()%100+1;

	
	while(strzal!=liczba)
	{
		proba++;
		cout <<"Zgadnij jaka : ";
		cin >> strzal;
		
		if(strzal==liczba)
			cout<<"BRAWO wygrałeś!(To twoja "<< proba << " próba)"<<endl;
			
		else if(strzal<liczba)
			cout<<"To za mało!"<<endl;
			
		else if(strzal>liczba)
			cout<<"To za dużo"<<endl;
	
			
	}
	system ("pause");
	return 0;
}
