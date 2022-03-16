#include <iostream>
#include <string> // použivanie stringou
#include <cstdlib> // Na generovanie èisel
#include <ctime> // Získanie a manipuláciu s informáciami o dátume a èase
using namespace std;
void rules();
int main()
{
    string playerName;
    int balance; // Uchováva rovnováhu hráèa
    int bettingAmount;
    int guess;
    int dice; // Uloží nahodne èíslo
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
        cout << "\n\nNa tvojom ucte je $ " << balance << "\n";// Získa stav financí hráèa
        do
        {
            cout << "Ahoj, " << playerName << ", Kolko chces vsadit? : $";
            cin >> bettingAmount;
            if (bettingAmount > balance)
                cout << "Tolko nemas na ucte!\n"
                << "\nZnova zadaj zostatok\n ";
        } while (bettingAmount > balance);// Získa èíslo hraèa
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
