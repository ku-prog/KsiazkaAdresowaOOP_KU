#ifndef UZYTKOWNIKMENEDZER_H
#define UZYTKOWNIKMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>

#include "Uzytkownik.h"
#include "PlikZUzytkownikami.h"

using namespace std;

class UzytkownikMenedzer
{

    vector<Uzytkownik> uzytkownicy;
    PlikZUzytkownikami plikZUzytkownikami;
    MetodyPomocnicze metodyPomocnicze;

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);


public:
    UzytkownikMenedzer(string nazwaPlikuZUzytkownikami): plikZUzytkownikami(nazwaPlikuZUzytkownikami) {};
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void wczytajUzytkownikowZPliku();
    //void ustawIdZalogowanegoUzytkownika();

    int logowanieUzytkownika();
    int idZalogowanegoUzytkownika;

    void zmianaHaslaZalogowanegoUzytkownika();

    void wylogowanieUzytkownika();


};
#endif // UZYTKOWNIKMENEDZER_H
