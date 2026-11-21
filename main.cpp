#include <iostream>
#include "Compte.h"

using namespace std;

int main()
{
    Compte compte(1, "Hassan", 500.0);

    cout << "Compte cree avec succes !" << endl;
    cout << "Titulaire : " << compte.getTitulaire() << endl;
    cout << "Numero : " << compte.getNumero() << endl;
    cout << "Solde initial : " << compte.getSolde() << endl;

    bool resultat = compte.deposer(200);
    cout << "\nDepot 200 : " << (resultat ? "Accepte" : "Refuse") << endl;
    cout << "Solde : " << compte.getSolde() << endl;

    resultat = compte.deposer(0);
    cout << "\nDepot 0 : " << (resultat ? "Accepte" : "Refuse") << endl;
    cout << "Solde : " << compte.getSolde() << endl;

    resultat = compte.retirer(100);
    cout << "\nRetrait 100 : " << (resultat ? "Accepte" : "Refuse") << endl;
    cout << "Solde : " << compte.getSolde() << endl;

    return 0;
}