#include "KsiazkaAdresowa.h"


void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikMenedzer.idZalogowanegoUzytkownika = uzytkownikMenedzer.logowanieUzytkownika();
    adresatMenedzer.idZalogowanegoUzytkownika = uzytkownikMenedzer.idZalogowanegoUzytkownika;
    adresatMenedzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku(adresatMenedzer.idZalogowanegoUzytkownika);
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::dodajAdresata()
{
    adresatMenedzer.dodajAdresata();
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    adresatMenedzer.wyswietlWszystkichAdresatow();
}

void KsiazkaAdresowa::wylogowanieUzytkownika()
{
    adresatMenedzer.idZalogowanegoUzytkownika = 0;
    uzytkownikMenedzer.idZalogowanegoUzytkownika = 0;
}
