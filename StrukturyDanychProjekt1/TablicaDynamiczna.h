#include <iostream>
using namespace std;

class TablicaDynamiczna {
public:
	int* tablica;
	int liczbaElementow;
	int rozmiar;

	//Konstruktor
	TablicaDynamiczna() {
		rozmiar = 2;
		liczbaElementow = 0;
		tablica = new int[rozmiar];
	}
	//Destruktor
	~TablicaDynamiczna() {
		delete[] tablica;
	}

	void dodajNaPoczatek(int nowaWartosc);
	void dodajNaKoniec(int nowaWartosc);
	void dodajNaMiejsce(int nowaWartosc, int miejsce);
	void usunWartoscNaPoczatku();
	void usunWartoscNaKoncu();
	void usunWartoscNaMiejscu(int miejsce);
	int znajdzWartosc(int wartosc);
	int zwrocWartosc(int miejsceWartosci);
private:
	void zmienWielkosc(int nowyRozmiar);
};