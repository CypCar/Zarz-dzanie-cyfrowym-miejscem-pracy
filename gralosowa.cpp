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
	
	cout <<"ELO! Pomyœla³em sobie o liczbie w przedziale 1-100"<<endl;
	srand (time(NULL));
	liczba = rand()%100+1;

	
	while(strzal!=liczba)
	{
		proba++;
		cout <<"Zgadnij jaka : ";
		cin >> strzal;
		
		if(strzal==liczba)
			cout<<"BRAWO wygra³eœ!(To twoja "<< proba << " próba)"<<endl;
			
		else if(strzal<liczba)
			cout<<"To za ma³o!"<<endl;
			
		else if(strzal>liczba)
			cout<<"To za du¿o"<<endl;
	
			
	}
	system ("pause");
	return 0;
}
