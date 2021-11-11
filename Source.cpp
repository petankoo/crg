#include <iostream>	
using namespace std;

int main() {
	int jedna;
	cout << "Bratislava je hlavne mesto ? 1)Rusko 2)Slovensko 3)Maïarsko 4)Srbsko " << endl;
	cin >> jedna;
	if (jedna == 2) {
		cout << "spravna odpoved" << endl;

		int dva;
		cout << "Co je Fortnite ? 5)hra 6)spotrebic 7)druh videa 8)právo" << endl;
		cin >> dva;
		if (dva == 5) {
			cout << "spravna odpoved" << endl;

			int tri;
			cout << "Co je sublera? 9)zelenina 10)ostrov 11)naradie 12)spotrebic" << endl;
			cin >> tri;
			if (tri == 11) {
				cout << "splnil si test, gratulujem" << endl;
			}
			else {
				cout << "zla odpoved, zacni znovu" << endl;
			}
		}
		else {
			cout << "zla odpoved, skus to este raz" << endl;
		}
	}
	else {
		cout << "chod od zaciatku" << endl;

	}

}
