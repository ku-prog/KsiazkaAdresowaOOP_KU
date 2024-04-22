#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <vector>
#include <fstream>

#include "MetodyPomocnicze.h"
#include "Adresat.h"


class PlikZAdresatami
{
    const string nazwaPlikuZAdresatami;
    const string nazwaPlikuTymczasowegoZAdresatami;

    MetodyPomocnicze metodyPomocnicze;

    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    bool czyPlikJestPusty(fstream &plikTekstowy);


    public:
    PlikZAdresatami(string NAZWAPLIKUZADRESATAMI): nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI) {};
    int idZalogowanegoUzytkownika;
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku(vector<Adresat> &adresaci, int idZalogowanegoUzytkownika);
    void dopiszAdresataDoPliku(Adresat adresat);
};

#endif // PLIKZADRESATAMI_H
