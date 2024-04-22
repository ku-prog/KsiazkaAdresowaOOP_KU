#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>

#include "PlikZAdresatami.h"


using namespace std;

class AdresatMenedzer
{
    vector<Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;
    MetodyPomocnicze metodyPomocnicze;

    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
    void wyswietlDaneAdresata(Adresat adresat);

public:
    AdresatMenedzer(string nazwaPlikuZAdresatami): plikZAdresatami(nazwaPlikuZAdresatami) {};

    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;

    void wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();


};

#endif // ADRESATMENEDZER_H
