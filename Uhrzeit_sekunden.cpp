#include <iostream>
#include <string>
using namespace std;

int main()
{
	/*	std = 24
		min = 1440
		sek = 86400 */
	int sek = 0;
	int min = 0;
	int std = 0;
	int rechnung_1 = 0;
	int rechnung_2 = 0;
	int ergebniss = 0;
	int ausgabe = 0;
	cout << "Bitte geben Sie die Stunden ein: ? ";
	cin >> std;
	
	cout << "Bitte geben Sie die Minuten ein: ? ";
	cin >> min;

	cout << "Bitte geben Sie die Sekunden ein: ? ";
	cin >> sek;

	rechnung_1 = std * 60 * 60;
	rechnung_2 = min * 60;
	ergebniss = rechnung_1 + rechnung_2 + sek;
	ausgabe = 86400 - ergebniss;
	cout << "Es dauert noch " << ausgabe << " Sekunden bis der Tag zuende ist." << endl;


	system("PAUSE");
	return 0;
}