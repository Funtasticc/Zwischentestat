#include <iostream>
#include <string>
using namespace std;

int main()
{
	int stunden = 0;
	int minuten = 0;
	int rechnung_1;
	int rechnung_2;
	cout << "Bitte geben sie die Stunden ein: ";
	cin >> stunden;

	cout << "Bitte geben sie die Minuten ein: ";
	cin >> minuten;
	rechnung_1 = 23 - stunden;
	rechnung_2 = 60 - minuten;
	if (rechnung_2 == 60)
	{
		rechnung_2 = 0;
		rechnung_1 = rechnung_1 + 1;
	}
	cout << "Es dauert noch " << rechnung_1 << " Stunden und " << rechnung_2 << " Minuten bis der Tag endet."
		<< endl;

	system("PAUSE");
	return 0;

}