#include <iostream>
using namespace std;

int main()
{
	string slova[5] = { "hruska", "jablko", "zemiak", "mrkva", "ananas" };
	int d = sizeof(slova) / sizeof(slova[0]);
	for (int i = d - 1; i >= 0; i--) {
		cout << slova[i] << "\n";
	}
}
