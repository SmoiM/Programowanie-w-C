/*Zadeklaruj dwie tablice całkowite, t1 i t2 o długości N1 i N2 i wypełnij je liczbami losowymi z przedziału [0, 10)
Napisz funkcję sortująca tablicę jednowymiarową i zastosuj ją do posortowania tablic t1 i t2.
Napisz i przetestuj funkcję int merge(int[], int, int[], int, int[]), która przyjmuje jako argumenty dwie posortowane tablice liczb całkowitych i tworzy nową tablicę, której wartości będą pochodziły z przekazanych tablic, nie będą się powtarzały i będą posortowane rosnąco. Funkcja zwraca długość tablicy wynikowej.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int tablicaLosowa(int tab[], int dlugosc){
    for (int i = 0; i < dlugosc; i++){
        int liczba = rand() % 10;
        tab[i] = liczba;
    }
    return 0;
}

int drukowanie(int tab[], int dlugosc){
    for (int i = 0; i < dlugosc; i++){
        printf("%d ", tab[i]);
    }
    printf("\n");
    return 0;
}

int merge (int tab1[], int dlugosc1, int tab2[], int dlugosc2){
    int kubelek[10] = {0,0,0,0,0,0,0,0,0,0};
    // korzystamy tu z sortowania przez zliczanie, co pozwoli nam od razu złączyć obie tablice
    for (int i = 0; i < dlugosc1; i++){
        int wsk = tab1[i];
        kubelek[wsk] += 1;
    }
    for (int i = 0; i < dlugosc2; i++){
        int wsk = tab2[i];
        kubelek[wsk] += 1;
    }

    printf("Pierwsza tablica: ");
    drukowanie(tab1, dlugosc1);

    printf("Druga tablica: ");
    drukowanie(tab2, dlugosc2);

    int wskaznik = 0;
    int wynik[10]; // w najgorszym przypadku w wygenerowanych tablicach pojawią się wszystkie liczby od 0 do 9 

    for (int i = 0; i < 10; i++){
        if (kubelek[i] != 0){
            wynik[wskaznik] = i;
            wskaznik += 1;
        }
    }
    printf("Wynik: ");
    drukowanie(wynik, wskaznik);

    printf("Dlugosc: %d", wskaznik);
    return wskaznik;
}

int main(){
    srand(time(NULL));

    int N1, N2;
    
    printf("Podaj dlugosc tablicy 1: ");
    scanf("%d", &N1);
    printf("Podaj dlugosc tablicy 2: ");
    scanf("%d", &N2);

    int t1[N1], t2[N2];

    tablicaLosowa(t1, N1);
    tablicaLosowa(t2, N2);

    merge(t1, N1, t2, N2);

    return 0;
}