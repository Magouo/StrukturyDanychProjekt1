#include <iostream>
#include "TablicaDynamiczna.h"
#include "ListaJednokierunkowaPelna.h"
#include "ListaJednokierunkowaHead.h"
using namespace std;
void losowanieTablicy(int tab[50000])
{
    int a;
    for (int i = 50000; i > 0; i--)
    {
        a = rand() % i + 1;
        tab[50000 - i] = a;
    }
}
int main()
{
  //  int tablica[50000];
    bool wyjdz = false;
    while (wyjdz == false)
    {
        int wybor = 0;
        ListaJednokierunkowaPelna struktura1;
        ListaJednokierunkoiwaHead struktura2;
        TablicaDynamiczna struktura3;
        int wybor1 = 0;
        int miejsce = 0;
        int liczba = 0;
        cout << "Ktora strukture chcesz uzyc? " << endl;
        cout << "1. tablica dynamiczna" << endl;
        cout << "2. lista jednokierunkowa z head" << endl;
        cout << "3. lista jednokierunkowa z head i tail" << endl;
        cout << "4. Wyjdz";
        cin >> wybor;
        switch(wybor) {
        case 1:
            cout << " Co chcesz zrobic?" << endl;
            cout << "1 Usunac na poczatku" << endl;
            cout << "2 Usunac na koncu" << endl;
            cout << "3 Usunac losowy element" << endl;
            cout << "4 Dodac na poczatku element" << endl;
            cout << "5 Dodac na koncu element" << endl;
            cout << "6 Dodac losowy element" << endl;
            cout << "7 Wyszukac wartosc" << endl;
            cin >> wybor1;
            switch (wybor1) {
            case 1:
                struktura3.usunWartoscNaPoczatku();
                break;
            case 2:
                struktura3.usunWartoscNaKoncu();
                break;
            case 3:
                cin >> liczba;
                struktura3.usunWartoscNaMiejscu(liczba);
                break;
            case 4: 
                cin >> liczba;
                struktura3.dodajNaPoczatek(liczba);
                break;
            case 5:
                cin >> liczba;
                struktura3.dodajNaKoniec(liczba);
                break;
            case 6:
                cin >> liczba;
                cin >> miejsce;
                struktura3.dodajNaMiejsce(miejsce, liczba);
                break;
            case 7:
                cin >> liczba;
                struktura3.znajdzWartosc(liczba);
                break;
            case 8:

            }
        case 2:
            cout << " Co chcesz zrobic?" << endl;
            cout << "1 Usunac na poczatku" << endl;
            cout << "2 Usunac na koncu" << endl;
            cout << "3 Usunac losowy element" << endl;
            cout << "4 Dodac na poczatku element" << endl;
            cout << "5 Dodac na koncu element" << endl;
            cout << "6 Dodac losowy element" << endl;
            cout << "7 Wyszukac wartosc" << endl;
            cin >> wybor1;
            switch (wybor1) {
            case 1:
                struktura2.usunWartoscNaPoczatku();
                break;
            case 2:
                struktura2.usunWartoscNaKoncu();
                break;
            case 3:
                cin >> liczba;
                struktura2.usunWartoscNaMiejscu(liczba);
                break;
            case 4:
                cin >> liczba;
                struktura2.dodajNaPoczatek(liczba);
                break;
            case 5:
                cin >> liczba;
                struktura2.dodajNaKoniec(liczba);
                break;
            case 6:
                cin >> liczba;
                cin >> miejsce;
                struktura2.dodajNaMiejsce(miejsce, liczba);
                break;
            case 7:
                cin >> liczba;
                struktura2.znajdzWartosc(liczba);
                break;
            }
            break;
        case 3:
            cout << " Co chcesz zrobic?" << endl;
            cout << "1 Usunac na poczatku" << endl;
            cout << "2 Usunac na koncu" << endl;
            cout << "3 Usunac losowy element" << endl;
            cout << "4 Dodac na poczatku element" << endl;
            cout << "5 Dodac na koncu element" << endl;
            cout << "6 Dodac losowy element" << endl;
            cout << "7 Wyszukac wartosc" << endl;
            cin >> wybor1;
            switch (wybor1) {
            case 1:
                struktura1.usunWartoscNaPoczatku();
                break;
            case 2:
                struktura1.usunWartoscNaKoncu();
                break;
            case 3:
                cin >> liczba;
                struktura1.usunWartoscNaMiejscu(liczba);
                break;
            case 4:
                cin >> liczba;
                struktura1.dodajNaPoczatek(liczba);
                break;
            case 5:
                cin >> liczba;
                struktura1.dodajNaKoniec(liczba);
                break;
            case 6:
                cin >> liczba;
                cin >> miejsce;
                struktura1.dodajNaMiejsce(miejsce, liczba);
                break;
            case 7:
                cin >> liczba;
                struktura1.znajdzWartosc(liczba);
                break;
            }
            break;
        case 4:
            wyjdz = true;
        }
    }
    return 0;
}
  /*  ListaJednokierunkowaPelna ListaJednokierunkowaP;
    ListaJednokierunkoiwaHead ListaJednokierunkoiwaH;
    TablicaDynamiczna tablicaDyn;

    
    double czasTablicaDynamiczna = 0;
    double czasListaJednokierunkowaHead = 0;
    double czasListaJednokierunkowaPelna = 0;*/

    //for (int j = 0; j < 10; j++) {
    //    float startTablicaDynamiczna = 0;
    //    float durationTablicaDynamiczna = 0;

    //    float startListaJednokierunkowaHead = 0;
    //    float durationListaJednokierunkowaHead = 0;

    //    float startListaJednokierunkowaPelna = 0;
    //    float durationListaJednokierunkowaPelna = 0;

    //    losowanieTablicy(tablica);
    //    startTablicaDynamiczna = clock();
    //    for (int i = 0; i < 50000; i++)
    //    {
    //        tablicaDyn.dodajNaPoczatek(tablica[i]);
    //    }
    //    durationTablicaDynamiczna = clock() - startTablicaDynamiczna;
    //    czasTablicaDynamiczna += durationTablicaDynamiczna;


    //    losowanieTablicy(tablica);
    //    startListaJednokierunkowaPelna = clock();
    //    for (int i = 0; i < 50000; i++)
    //    {
    //        ListaJednokierunkowaP.dodajNaPoczatek(tablica[i]);
    //    }
    //    durationListaJednokierunkowaPelna = clock() - startListaJednokierunkowaPelna;
    //    czasListaJednokierunkowaPelna += durationListaJednokierunkowaPelna;


    //    losowanieTablicy(tablica);
    //    startListaJednokierunkowaHead = clock();
    //    for (int i = 0; i < 50000; i++)
    //    {
    //        ListaJednokierunkoiwaH.dodajNaPoczatek(tablica[i]);
    //    }
    //    durationListaJednokierunkowaHead = clock() - startListaJednokierunkowaHead;
    //    czasListaJednokierunkowaHead += durationListaJednokierunkowaHead;

    //    cout << "dodawanie na poczatku " << "Czas tablicy dynamicznej: " << durationTablicaDynamiczna << " Czas listy jednokierunkowej z head: " << durationListaJednokierunkowaHead << " Czas listy jednokierunkowej pelnej: " << durationListaJednokierunkowaPelna << endl;
    //}
    //cout << "dodawanie na poczatku " << "Czas tablicy dynamicznej: " << czasTablicaDynamiczna << " Czas listy jednokierunkowej z head: " << czasListaJednokierunkowaHead << " Czas listy jednokierunkowej pelnej: " << czasListaJednokierunkowaPelna << endl;

    //czasTablicaDynamiczna = 0;
    //czasListaJednokierunkowaHead = 0;
    //czasListaJednokierunkowaPelna = 0;

    //for (int j = 0; j < 10; j++) {
    //    float startTablicaDynamiczna = 0;
    //    float durationTablicaDynamiczna = 0;

    //    float startListaJednokierunkowaHead = 0;
    //    float durationListaJednokierunkowaHead = 0;

    //    float startListaJednokierunkowaPelna = 0;
    //    float durationListaJednokierunkowaPelna = 0;

    //    losowanieTablicy(tablica);
    //    startTablicaDynamiczna = clock();
    //    for (int i = 0; i < 500000; i++)
    //    {
    //        tablicaDyn.dodajNaKoniec(tablica[i]);
    //    }
    //    durationTablicaDynamiczna = clock() - startTablicaDynamiczna;
    //    czasTablicaDynamiczna += durationTablicaDynamiczna;


    //    losowanieTablicy(tablica);
    //    startListaJednokierunkowaPelna = clock();
    //    for (int i = 0; i < 50000; i++)
    //    {
    //        ListaJednokierunkowaP.dodajNaKoniec(tablica[i]);
    //    }
    //    durationListaJednokierunkowaPelna = clock() - startListaJednokierunkowaPelna;
    //    czasListaJednokierunkowaPelna += durationListaJednokierunkowaPelna;


    //    losowanieTablicy(tablica);
    //    startListaJednokierunkowaHead = clock();
    //    for (int i = 0; i < 50000; i++)
    //    {
    //        ListaJednokierunkoiwaH.dodajNaKoniec(tablica[i]);
    //    }
    //    durationListaJednokierunkowaHead = clock() - startListaJednokierunkowaHead;
    //    czasListaJednokierunkowaHead += durationListaJednokierunkowaHead;
    //    cout << "dodawanie na koncu " << "Czas tablicy dynamicznej: " << durationTablicaDynamiczna << " Czas listy jednokierunkowej z head: " << durationListaJednokierunkowaHead << " Czas listy jednokierunkowej pelnej: " << durationListaJednokierunkowaPelna << endl;
    //}
    //cout << "dodawanie na koncu " << "Czas tablicy dynamicznej: " << czasTablicaDynamiczna << " Czas listy jednokierunkowej z head: " << czasListaJednokierunkowaHead << " Czas listy jednokierunkowej pelnej: " << czasListaJednokierunkowaPelna << endl;

    //czasTablicaDynamiczna = 0;
    //czasListaJednokierunkowaHead = 0;
    //czasListaJednokierunkowaPelna = 0;

    //for (int j = 0; j < 10; j++) {
    //    float startTablicaDynamiczna = 0;
    //    float durationTablicaDynamiczna = 0;

    //    float startListaJednokierunkowaHead = 0;
    //    float durationListaJednokierunkowaHead = 0;

    //    float startListaJednokierunkowaPelna = 0;
    //    float durationListaJednokierunkowaPelna = 0;
    //    int a;
    //    losowanieTablicy(tablica);
    //    startTablicaDynamiczna = clock();

    //    for (int i = 0; i < 50000; i++)
    //    {
    //        a = rand() % (i + 1) + 1;
    //        tablicaDyn.dodajNaMiejsce(tablica[i], a);
    //    }
    //    durationTablicaDynamiczna = clock() - startTablicaDynamiczna;
    //    czasTablicaDynamiczna += durationTablicaDynamiczna;


    //    losowanieTablicy(tablica);
    //    startListaJednokierunkowaPelna = clock();
    //    for (int i = 0; i < 50000; i++)
    //    {
    //        a = rand() % (i + 1) + 1;
    //        ListaJednokierunkowaP.dodajNaMiejsce(tablica[i], a);
    //    }
    //    durationListaJednokierunkowaPelna = clock() - startListaJednokierunkowaPelna;
    //    czasListaJednokierunkowaPelna += durationListaJednokierunkowaPelna;


    //    losowanieTablicy(tablica);
    //    startListaJednokierunkowaHead = clock();
    //    for (int i = 0; i < 50000; i++)
    //    {
    //        a = rand() % (i + 1) + 1;

    //        ListaJednokierunkoiwaH.dodajNaMiejsce(tablica[i], a);
    //    }
    //    durationListaJednokierunkowaHead = clock() - startListaJednokierunkowaHead;
    //    czasListaJednokierunkowaHead += durationListaJednokierunkowaHead;
    //    cout << "dodawanie w losowym miejscu " << "Czas tablicy dynamicznej: " << durationTablicaDynamiczna << " Czas listy jednokierunkowej z head: " << durationListaJednokierunkowaHead << " Czas listy jednokierunkowej pelnej: " << durationListaJednokierunkowaPelna << endl;
    //}
    //cout << "dodawanie w losowym miejscu " << "Czas tablicy dynamicznej: " << czasTablicaDynamiczna << " Czas listy jednokierunkowej z head: " << czasListaJednokierunkowaHead << " Czas listy jednokierunkowej pelnej: " << czasListaJednokierunkowaPelna << endl;
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    //czasTablicaDynamiczna = 0;
    //czasListaJednokierunkowaHead = 0;
    //czasListaJednokierunkowaPelna = 0;

    //for (int j = 0; j < 10; j++) {
    //    float startTablicaDynamiczna = 0;
    //    float durationTablicaDynamiczna = 0;

    //    float startListaJednokierunkowaHead = 0;
    //    float durationListaJednokierunkowaHead = 0;

    //    float startListaJednokierunkowaPelna = 0;
    //    float durationListaJednokierunkowaPelna = 0;

    //    losowanieTablicy(tablica);
    //    for (int i = 0; i < 50000; i++)
    //    {
    //        tablicaDyn.dodajNaPoczatek(tablica[i]);
    //    }

    //    startTablicaDynamiczna = clock();
    //    for (int i = 50000; i > 0; i--)
    //    {
    //        tablicaDyn.usunWartoscNaPoczatku();
    //    }
    //    durationTablicaDynamiczna = clock() - startTablicaDynamiczna;
    //    czasTablicaDynamiczna += durationTablicaDynamiczna;

    //    losowanieTablicy(tablica);

    //    for (int i = 0; i < 50000; i++)
    //    {
    //        ListaJednokierunkowaP.dodajNaPoczatek(tablica[i]);
    //    }
    //    startListaJednokierunkowaPelna = clock();
    //    for (int i = 50000; i > 0; i--)
    //    {
    //        ListaJednokierunkowaP.usunWartoscNaPoczatku();
    //    }
    //    durationListaJednokierunkowaPelna = clock() - startListaJednokierunkowaPelna;
    //    czasListaJednokierunkowaPelna += durationListaJednokierunkowaPelna;


    //    losowanieTablicy(tablica);
    //    for (int i = 0; i < 50000; i++)
    //    {
    //        ListaJednokierunkoiwaH.dodajNaPoczatek(tablica[i]);
    //    }
    //    startListaJednokierunkowaHead = clock();
    //    for (int i = 50000; i > 0; i--)
    //    {
    //        ListaJednokierunkoiwaH.usunWartoscNaPoczatku();
    //    }
    //    durationListaJednokierunkowaHead = clock() - startListaJednokierunkowaHead;
    //    czasListaJednokierunkowaHead += durationListaJednokierunkowaHead;
    //    cout << "usuwanie na poczatku " << "Czas tablicy dynamicznej: " << durationTablicaDynamiczna << " Czas listy jednokierunkowej z head: " << durationListaJednokierunkowaHead << " Czas listy jednokierunkowej pelnej: " << durationListaJednokierunkowaPelna << endl;
    //}
    //    cout << "usuwanie na poczatku " << "Czas tablicy dynamicznej: " << czasTablicaDynamiczna << " Czas listy jednokierunkowej z head: " << czasListaJednokierunkowaHead << " Czas listy jednokierunkowej pelnej: " << czasListaJednokierunkowaPelna << endl;

    //    czasTablicaDynamiczna = 0;
    //    czasListaJednokierunkowaHead = 0;
    //    czasListaJednokierunkowaPelna = 0;

    //    for (int j = 0; j < 10; j++) {
    //        float startTablicaDynamiczna = 0;
    //        float durationTablicaDynamiczna = 0;

    //        float startListaJednokierunkowaHead = 0;
    //        float durationListaJednokierunkowaHead = 0;

    //        float startListaJednokierunkowaPelna = 0;
    //        float durationListaJednokierunkowaPelna = 0;

    //        losowanieTablicy(tablica);
    //        for (int i = 0; i < 50000; i++)
    //        {
    //            tablicaDyn.dodajNaKoniec(tablica[i]);
    //        }

    //        startTablicaDynamiczna = clock();
    //        for (int i = 50000; i > 0; i--)
    //        {
    //            tablicaDyn.usunWartoscNaKoncu();
    //        }
    //        durationTablicaDynamiczna = clock() - startTablicaDynamiczna;
    //        czasTablicaDynamiczna += durationTablicaDynamiczna;


    //        losowanieTablicy(tablica);
    //        for (int i = 0; i < 50000; i++)
    //        {
    //            ListaJednokierunkowaP.dodajNaPoczatek(tablica[i]);
    //        }
    //        startListaJednokierunkowaPelna = clock();
    //        for (int i = 50000; i  > 0 ; i--)
    //        {
    //            ListaJednokierunkowaP.usunWartoscNaKoncu();
    //        }
    //        durationListaJednokierunkowaPelna = clock() - startListaJednokierunkowaPelna;
    //        czasListaJednokierunkowaPelna += durationListaJednokierunkowaPelna;


    //        losowanieTablicy(tablica);
    //        for (int i = 0; i < 50000; i++)
    //        {
    //            ListaJednokierunkoiwaH.dodajNaPoczatek(tablica[i]);
    //        }
    //        startListaJednokierunkowaHead = clock();
    //        for (int i = 50000; i > 0; i--)
    //        {
    //            ListaJednokierunkoiwaH.usunWartoscNaKoncu();
    //        }
    //        durationListaJednokierunkowaHead = clock() - startListaJednokierunkowaHead;
    //        czasListaJednokierunkowaHead += durationListaJednokierunkowaHead;
    //        cout << "usuwanie na koncu " << "Czas tablicy dynamicznej: " << durationTablicaDynamiczna << " Czas listy jednokierunkowej z head: " << durationListaJednokierunkowaHead << " Czas listy jednokierunkowej pelnej: " << durationListaJednokierunkowaPelna << endl;
    //    }
    //    cout << "usuwanie na koncu " << "Czas tablicy dynamicznej: " << czasTablicaDynamiczna << " Czas listy jednokierunkowej z head: " << czasListaJednokierunkowaHead << " Czas listy jednokierunkowej pelnej: " << czasListaJednokierunkowaPelna << endl;

    //    czasTablicaDynamiczna = 0;
    //    czasListaJednokierunkowaHead = 0;
    //    czasListaJednokierunkowaPelna = 0;

    //    for (int j = 0; j < 10; j++) {
    //        float startTablicaDynamiczna = 0;
    //        float durationTablicaDynamiczna = 0;

    //        float startListaJednokierunkowaHead = 0;
    //        float durationListaJednokierunkowaHead = 0;

    //        float startListaJednokierunkowaPelna = 0;
    //        float durationListaJednokierunkowaPelna = 0;
    //        int a;
    //        losowanieTablicy(tablica);
    //        for (int i = 0; i < 50000; i++)
    //        {
    //            tablicaDyn.dodajNaPoczatek(tablica[i]);
    //        }
    //        startTablicaDynamiczna = clock();

    //        for (int i = 50000; i > 0; i--)
    //        {
    //            a = rand() % (i + 1) + 1;
    //            tablicaDyn.usunWartoscNaMiejscu(a);
    //        }
    //        durationTablicaDynamiczna = clock() - startTablicaDynamiczna;
    //        czasTablicaDynamiczna += durationTablicaDynamiczna;


    //        losowanieTablicy(tablica);
    //        for (int i = 0; i < 50000; i++)
    //        {
    //            ListaJednokierunkowaP.dodajNaPoczatek(tablica[i]);
    //        }
    //        startListaJednokierunkowaPelna = clock();
    //        for (int i = 50000; i > 0; i--)
    //        {
    //            a = rand() % (i + 1) + 1;
    //            ListaJednokierunkowaP.usunWartoscNaMiejscu(a);
    //        }
    //        durationListaJednokierunkowaPelna = clock() - startListaJednokierunkowaPelna;
    //        czasListaJednokierunkowaPelna += durationListaJednokierunkowaPelna;


    //        losowanieTablicy(tablica);
    //        for (int i = 0; i < 50000; i++)
    //        {
    //            ListaJednokierunkoiwaH.dodajNaPoczatek(tablica[i]);
    //        }

    //        startListaJednokierunkowaHead = clock();
    //        for (int i = 50000; i > 0; i--)
    //        {
    //            a = rand() % (i + 1) + 1;

    //            ListaJednokierunkoiwaH.usunWartoscNaMiejscu(a);
    //        }
    //        durationListaJednokierunkowaHead = clock() - startListaJednokierunkowaHead;
    //        czasListaJednokierunkowaHead += durationListaJednokierunkowaHead;
    //        cout << "usuwanie losowe " << "Czas tablicy dynamicznej: " << durationTablicaDynamiczna << " Czas listy jednokierunkowej z head: " << durationListaJednokierunkowaHead << " Czas listy jednokierunkowej pelnej: " << durationListaJednokierunkowaPelna << endl;
    //    }
    //    cout << "usuwanie losowe " << "Czas tablicy dynamicznej: " << czasTablicaDynamiczna << " Czas listy jednokierunkowej z head: " << czasListaJednokierunkowaHead << " Czas listy jednokierunkowej pelnej: " << czasListaJednokierunkowaPelna << endl;
    //    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /*czasTablicaDynamiczna = 0;
        czasListaJednokierunkowaHead = 0;
        czasListaJednokierunkowaPelna = 0;

        for (int j = 0; j < 10; j++) {
            float startTablicaDynamiczna = 0;
            float durationTablicaDynamiczna = 0;

            float startListaJednokierunkowaHead = 0;
            float durationListaJednokierunkowaHead = 0;

            float startListaJednokierunkowaPelna = 0;
            float durationListaJednokierunkowaPelna = 0;
            int a;
            int szukana;
            losowanieTablicy(tablica);
            a = rand() % (50000 + 1) + 1;
            for (int i = 0; i < 50000; i++)
            {
                tablicaDyn.dodajNaPoczatek(tablica[i]);
                if (i == a)
                {
                    szukana = tablica[i];
                }
            }

            startTablicaDynamiczna = clock();
            tablicaDyn.znajdzWartosc(szukana);
            durationTablicaDynamiczna = clock() - startTablicaDynamiczna;
            czasTablicaDynamiczna += durationTablicaDynamiczna;


            losowanieTablicy(tablica);
            for (int i = 0; i < 50000; i++)
            {
                ListaJednokierunkowaP.dodajNaPoczatek(tablica[i]);
            }
            startListaJednokierunkowaPelna = clock();
            ListaJednokierunkowaP.znajdzWartosc(szukana);
            durationListaJednokierunkowaPelna = clock() - startListaJednokierunkowaPelna;
            czasListaJednokierunkowaPelna += durationListaJednokierunkowaPelna;


            losowanieTablicy(tablica);
            for (int i = 0; i < 50000; i++)
            {
                ListaJednokierunkoiwaH.dodajNaPoczatek(tablica[i]);
            }

            startListaJednokierunkowaHead = clock();
            ListaJednokierunkoiwaH.znajdzWartosc(szukana);
            durationListaJednokierunkowaHead = clock() - startListaJednokierunkowaHead;
            czasListaJednokierunkowaHead += durationListaJednokierunkowaHead;
            cout << "usuwanie losowe " << "Czas tablicy dynamicznej: " << durationTablicaDynamiczna << " Czas listy jednokierunkowej z head: " << durationListaJednokierunkowaHead << " Czas listy jednokierunkowej pelnej: " << durationListaJednokierunkowaPelna << endl;
        }
        cout << "usuwanie losowe " << "Czas tablicy dynamicznej: " << czasTablicaDynamiczna << " Czas listy jednokierunkowej z head: " << czasListaJednokierunkowaHead << " Czas listy jednokierunkowej pelnej: " << czasListaJednokierunkowaPelna << endl;*/
//}