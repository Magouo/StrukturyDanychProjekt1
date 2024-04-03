#include <iostream>
using namespace std;


// WÊZÊ£
class Wezel1 {
public:
	int wartosc;
	// wskaŸnik na kolejny wêze³ w liscie
	Wezel1* kolejny;
	// Konstruktor
	Wezel1(int data)
	{
		this->wartosc = data;
		this->kolejny = nullptr;
	}
	// brak zasobow dynamiczni alokowanych wiec destruktor nie jest potrzebny do zwalniania
};

class ListaJednokierunkoiwaHead {
public:
	// wskaznik na pierwszy Wezel1 listy
	Wezel1* head;
	//Konstruktor
	ListaJednokierunkoiwaHead() {
		this->head = nullptr;
	}
	void dodajNaPoczatek(int nowaWartosc);
	void dodajNaKoniec(int nowaWartosc);
	void dodajNaMiejsce(int nowaWartosc, int miejsce);
	void usunWartoscNaPoczatku();
	void usunWartoscNaKoncu();
	void usunWartoscNaMiejscu(int miejsce);
	void znajdzWartosc(int wartosc);
	int zwrocWartosc(int miejsceWartosci);
};