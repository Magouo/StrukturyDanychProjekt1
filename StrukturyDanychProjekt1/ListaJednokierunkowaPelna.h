#include <iostream>
using namespace std;

// WÊZÊ£
class Wezel {
public:
	int wartosc;
	// wskaŸnik na kolejny wêze³ w liscie
	Wezel* kolejny;
	// Konstruktor
	Wezel(int data)
	{
		this->wartosc = data;
		this->kolejny = nullptr;
	}
	// brak zasobow dynamiczni alokowanych wiec destruktor nie jest potrzebny do zwalniania
};

class ListaJednokierunkowaPelna {
public:
	// wskaznik na pierwszy wezel listy
	Wezel* head;
	Wezel* tail;
	//Konstruktor
	ListaJednokierunkowaPelna() {
		this->head = nullptr;
		this->tail = nullptr;
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