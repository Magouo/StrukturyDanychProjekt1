#include "ListaJednokierunkowaPelna.h"

void ListaJednokierunkowaPelna::dodajNaPoczatek(int nowaWartosc)
{
	//stworzenie nowego wezla
	Wezel* nowyWezel = new Wezel(nowaWartosc);
	// ustawienie wskaznika kolejny nowego wezla na aktualny head
	nowyWezel->kolejny = head;
	// ustawienie head na nowy wezel
	head = nowyWezel;
	// jesli lista jest pusta ustawiam tail aby wskazywal tez nowy wezel
	if (tail == nullptr)
	{
		tail = nowyWezel;
	}
}

void ListaJednokierunkowaPelna::dodajNaKoniec(int nowaWartosc)
{
	//stworzenie nowego wezla
	Wezel* nowyWezel = new Wezel(nowaWartosc);
	if (head == nullptr) {
		// Jak lista jest pusta dodaje na poczatek
		dodajNaPoczatek(nowaWartosc);
	}
	else {
		// dodanie nowegoWezla na koniec listy
		tail->kolejny = nowyWezel;
		// wskazywanie na ostatni element
		tail = nowyWezel;
	}
}

void ListaJednokierunkowaPelna::dodajNaMiejsce(int nowaWartosc, int miejsce)
{
	// jak dodajemy na pierwsze miejsce
	if (miejsce - 1 == 0)
	{
		dodajNaPoczatek(nowaWartosc);
	}
	else {
		// stwoarzeni nowego wezla
		Wezel* nowyWezel = new Wezel(nowaWartosc);

		Wezel* aktualny = head;
		//znalezienie wezla przed miejscem wstawienia
		for (int i = 0; i < miejsce - 2; i++)
		{
			aktualny = aktualny->kolejny;
		}
		// wstawienie nowego wezla
		nowyWezel->kolejny = aktualny->kolejny;
		aktualny->kolejny = nowyWezel;
	}
}

void ListaJednokierunkowaPelna::usunWartoscNaPoczatku()
{
	// wskazanie wezla do usuniecia
	Wezel* doUsuniecia = head;
	// przesuniecie wskaznika na kolejna wartosc
	head = head->kolejny;
	//usuniecie wezla
	delete doUsuniecia;
	//aktualizacja tail jak lista jest pusta
	if (head == nullptr)
	{
		tail = nullptr;
	}
}

void ListaJednokierunkowaPelna::usunWartoscNaKoncu()
{
	//sprawdzanie czy lista ma jeden lelement
	if (head == tail) {
		usunWartoscNaPoczatku();
	}
	else {
		Wezel* aktualny = head;
		// przejscie do przedostatniego wezla
		while (aktualny->kolejny != tail) {
			aktualny = aktualny->kolejny;
		}
		// wskaznikna usuwany wezel
		Wezel* doUsuniecia = tail;
		// zaktualizawanie tail na przedostatni wezel
		tail = aktualny;
		tail->kolejny = nullptr;
		//usuniecie
		delete doUsuniecia;
	}
}

void ListaJednokierunkowaPelna::usunWartoscNaMiejscu(int miejsce)
{
	if (miejsce - 1 == 0) {
		usunWartoscNaPoczatku();
	}
	else {
		Wezel* aktualny = head;
		Wezel* poprzedni = nullptr;
		int i = 0;
		// przejscie do wezla przed usuwanym
		while (aktualny != nullptr && i < miejsce - 1) {
			poprzedni = aktualny;
			aktualny = aktualny->kolejny;
			i++;
		}
		poprzedni->kolejny = aktualny->kolejny;
		delete aktualny;
	}
}

void ListaJednokierunkowaPelna::znajdzWartosc(int wartosc)
{
	// zmienna do poruszania sie po liscie
	Wezel* aktualny = head;
	while (aktualny != nullptr && aktualny->wartosc != wartosc) {
		aktualny = aktualny->kolejny;
	}
	if (aktualny == nullptr) {
		cout << "brak";
	}
	else if (aktualny->wartosc == wartosc) {
		cout << "znaleziony";
		return;
	}
}

int ListaJednokierunkowaPelna::zwrocWartosc(int miejsceWartosci)
{
	// zmienna do poruszania sie po liscie
	Wezel* aktualny = head;
	int i = 0;
	while (aktualny != nullptr && i < miejsceWartosci - 1) {
		aktualny = aktualny->kolejny;
		i++;
	}
	return aktualny->wartosc;
}