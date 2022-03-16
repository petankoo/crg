#include <iostream>
#include <string> // pou�ivanie stringou
#include <cstdlib> // Na generovanie �isel
#include <ctime> // Z�skanie a manipul�ciu s inform�ciami o d�tume a �ase
using namespace std;
void rules();
int main()
{
    string playerName;
    int balance; // Uchov�va rovnov�hu hr��a
    int bettingAmount;
    int guess;
    int dice; // Ulo�� nahodne ��slo
    char choice;
    srand(time(0)); // Random generovanie
    cout << "\n\t\t===Vitaj v casine===\n\n";
    cout << "\n\nNapis svoje meno : ";
    getline(cin, playerName);
    cout << "\n\nKolko penazi mas na ucte? : $";
    cin >> balance;
    do
    {
        system("cls");
        rules();
        cout << "\n\nNa tvojom ucte je $ " << balance << "\n";// Z�ska stav financ� hr��a
        do
        {
            cout << "Ahoj, " << playerName << ", Kolko chces vsadit? : $";
            cin >> bettingAmount;
            if (bettingAmount > balance)
                cout << "Tolko nemas na ucte!\n"
                << "\nZnova zadaj zostatok\n ";
        } while (bettingAmount > balance);// Z�ska ��slo hra�a
        do
        {
            cout << "Vyber si cislo na ktore chces vsadit 1 & 36 :";
            cin >> guess;
            if (guess <= 0 || guess > 36)
                cout << "\nVyber si cislo od 1 do 36\n"
                << "Neplatne cislo:\n ";
            
        } while (guess <= 0 || guess > 36);
        dice = rand() % 36 + 1;
        if (dice == guess)
        {
            cout << "\n\nMas stastie!! vyhral si Rs." << bettingAmount * 36;
            balance = balance + bettingAmount * 3;
        }
        else
        {
            cout << "Skoda nepodarilo sa !! Stratil si $ " << bettingAmount << "\n";
            balance = balance - bettingAmount;
        }
        cout << "\nVyherne cislo je : " << dice << "\n";
        cout << "\n" << playerName << ", Stav tvojho uctu je $ " << balance << "\n";
        if (balance == 0)
        {
            cout << "Nemas uz peniaze na hru ";
            break;
        }
        cout << "\n\n-->Chces hrat znova? (y/n)? ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');
    cout << "\n\n\n";
    cout << "\n\nTDakujeme ze hras. Stav tvojho uctu je $ " << balance << "\n\n";
    return 0;
}
void rules()
{
    system("cls");
    cout << "\t\t====Casino ruleta pravidla====\n";
    cout << "\t1. Vyber si cislo od 1 do 36\n";
    cout << "\t2. Vitaz ziska 3-nasobok stavky penazi\n";
    cout << "\t3. Pri zlom vsadeni stratite peniaze, ktore ste vsadili\n\n";
}
