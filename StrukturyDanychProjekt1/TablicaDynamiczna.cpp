#include "TablicaDynamiczna.h"

void TablicaDynamiczna::dodajNaPoczatek(int nowaWartosc)
{
	if (liczbaElementow == rozmiar)
	{
		zmienWielkosc(rozmiar * 2);
	}

	for (int i = liczbaElementow; i > 0; i--)
	{
		tablica[i] = tablica[i - 1];
	}

	tablica[0] = nowaWartosc;
	liczbaElementow++;
}

void TablicaDynamiczna::dodajNaKoniec(int nowaWartosc)
{
	if (liczbaElementow == rozmiar)
	{
		zmienWielkosc(rozmiar * 2);
	}
	// tablica ma indeks od 0 wiec nie ma potrzeby zwiekszac liczby elementow przed dodaniem nowej wartosci
	tablica[liczbaElementow] = nowaWartosc;
	liczbaElementow++;
}

void TablicaDynamiczna::dodajNaMiejsce(int nowaWartosc, int miejsce)
{
	if (liczbaElementow == rozmiar)
	{
		zmienWielkosc(rozmiar * 2);
	}

	for (int i = liczbaElementow - 1; i >= miejsce - 1; i--)
	{
		tablica[i + 1] = tablica[i];
	}
	tablica[miejsce - 1] = nowaWartosc;
	liczbaElementow++;
}

void TablicaDynamiczna::usunWartoscNaPoczatku()
{
	for (int i = 1; i < liczbaElementow; i++)
	{
		tablica[i - 1] = tablica[i];
	}
	liczbaElementow--;
	zmienWielkosc(liczbaElementow);
}

void TablicaDynamiczna::usunWartoscNaKoncu()
{
	liczbaElementow--;
	zmienWielkosc(liczbaElementow);
}

void TablicaDynamiczna::usunWartoscNaMiejscu(int miejsce)
{
	for (int i = miejsce - 1; i < rozmiar; i++)
	{
		tablica[i] = tablica[i + 1];
	}
	liczbaElementow--;
	zmienWielkosc(liczbaElementow);
}

int TablicaDynamiczna::znajdzWartosc(int wartosc)
{
	for (int i = 0; i < rozmiar; i++)
	{
		if (tablica[i] == wartosc)
		{
			cout << "znalezione";
			return 0;
		}
	}
	cout << "brak";
	return 1;
}

int TablicaDynamiczna::zwrocWartosc(int miejsceWartosci)
{
	return tablica[miejsceWartosci - 1];
}

void TablicaDynamiczna::zmienWielkosc(int nowyRozmiar)
{
	int* nowaTablica = new int[nowyRozmiar];

	for (int i = 0; i < liczbaElementow; i++)
	{
		nowaTablica[i] = tablica[i];
	}
	delete[] tablica;
	tablica = nowaTablica;
	rozmiar = nowyRozmiar;
}
