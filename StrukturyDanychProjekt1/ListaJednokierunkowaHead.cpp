#include "ListaJednokierunkowaHead.h"

void ListaJednokierunkoiwaHead::dodajNaPoczatek(int nowaWartosc)
{
	//stworzenie nowego wezla
	Wezel1* nowyWezel1 = new Wezel1(nowaWartosc);
	// ustawienie wskaznika kolejny nowego wezla na aktualny head
	nowyWezel1->kolejny = head;
	// ustawienie head na nowy Wezel1
	head = nowyWezel1;
}

void ListaJednokierunkoiwaHead::dodajNaKoniec(int nowaWartosc)
{
	//stworzenie nowego wezla
	Wezel1* nowyWezel1 = new Wezel1(nowaWartosc);
	if (head == nullptr) {
		// Jak lista jest pusta dodaje na poczatek
		dodajNaPoczatek(nowaWartosc);
	} else {

	Wezel1* aktualny = head;
	// dojscie do konca listy
	while (aktualny->kolejny != nullptr)
	{
		aktualny = aktualny->kolejny;
	}
	// dodanie nowej wartosci na koniec
	aktualny->kolejny = nowyWezel1;
	}
}

void ListaJednokierunkoiwaHead::dodajNaMiejsce(int nowaWartosc, int miejsce)
{
	//stworzenie nowego wezla
	Wezel1* nowyWezel1 = new Wezel1(nowaWartosc);
	if (miejsce - 1 == 0)
	{
		dodajNaPoczatek(nowaWartosc);
	}
	else {
		// zmienne do œledzenia wezlow podczas przechodzenia przez liste
		Wezel1* poprzedni = nullptr;
		Wezel1* aktualny = head;
		int i = 0;
		// while zamiast fora dlatego ¿e nie znamy wielkosci listy
		while (aktualny != nullptr && i < miejsce - 1) {
			//zapamietanie poprzedzniego wezla
			poprzedni = aktualny;
			// przejscie do kolejnego wezla
			aktualny = aktualny->kolejny;
			i++;
		}
		// polaczenie wezla z lista i dodanie wartosci
		nowyWezel1->kolejny = aktualny;
		poprzedni->kolejny = nowyWezel1;
	}	
}

void ListaJednokierunkoiwaHead::usunWartoscNaPoczatku()
{
	// wskazanie wezla do usuniecia
	Wezel1* doUsuniecia = head;
	// przesuniecie wskaznika na kolejna wartosc
	head = head->kolejny;
	//usuniecie wezla
	delete doUsuniecia;
}

void ListaJednokierunkoiwaHead::usunWartoscNaKoncu()
{
	// jak lista ma jeden element usuwa na poczatku
	if (head->kolejny == nullptr)
	{
		usunWartoscNaPoczatku();
	}
	else {
		// zmienne do œledzenia wezlow podczas przechodzenia przez liste
		Wezel1* poprzedni = nullptr;
		Wezel1* aktualny = head;
		// przejscie do ostatniego wezla
		while (aktualny->kolejny != nullptr) {
			poprzedni = aktualny;
			aktualny = aktualny->kolejny;
		}
		// ustawienie ostatniego wezla na nullptr
		poprzedni->kolejny = nullptr;
		// usuniecie wezla
		delete aktualny;
	}
}

void ListaJednokierunkoiwaHead::usunWartoscNaMiejscu(int miejsce)
{
	if (miejsce - 1 == 0) {
		usunWartoscNaPoczatku();
	}
	else {
		// zmienne do œledzenia wezlow podczas przechodzenia przez liste
		Wezel1* poprzedni = nullptr;
		Wezel1* aktualny = head;
		int i = 0;
		// przejscie do wezla przed miejscem usuniecia
		while (aktualny != nullptr && i < miejsce - 1) {
			poprzedni = aktualny;
			aktualny = aktualny->kolejny;
			i++;
		}
			poprzedni->kolejny = aktualny->kolejny;
		delete aktualny;
	}
}

void ListaJednokierunkoiwaHead::znajdzWartosc(int wartosc)
{	
	// zmienna do poruszania sie po liscie
	Wezel1* aktualny = head;
	while (aktualny != nullptr && aktualny->wartosc != wartosc) {
		aktualny = aktualny->kolejny;
	}
	if (aktualny == nullptr) {
		cout << "brak";
	}
	else if(aktualny->wartosc == wartosc){
		cout << "znaleziony";
		return;
	}
}

int ListaJednokierunkoiwaHead::zwrocWartosc(int miejsceWartosci)
{
	// zmienna do poruszania sie po liscie
	Wezel1* aktualny = head;
	int i = 0;
	while (aktualny != nullptr && i < miejsceWartosci - 1) {
		aktualny = aktualny->kolejny;
		i++;
	}
	return aktualny->wartosc;
}
