//Napisz funkcję, która wypisuje wartości tablicy t począwszy od elementu o indeksie k, będącym parametrem funkcji. Po wypisaniu elementu t[n − 1] należy wypisać kolejno elementy t[0], t[1], ..., t[k − 1]. Kolejny parametr funkcji określa, czy wypisania należy dokonać "w przód" czy "w tył".

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int printArray(int tab[], int dlugosc, int k, int kierunek){
    switch(kierunek){
        case 1:
            for (int i = k; i < dlugosc; i++){
            printf("%d ", tab[i]);
        }
        for (int i = 0; i < k; i++){
            printf("%d ", tab[i]);
        }
        break;

        case -1:
            for (int i = k; i >= 0; i--){
            printf("%d ", tab[i]);
        }
        for (int i = dlugosc - 1; i > k; i--){
            printf("%d ", tab[i]);
        }
        break;

        default :
            printf("Niezdefiniowana");
            break;
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

int main(){
    int dlugosc; 
    int indeks;
    char kierunek;
    
    srand(time(NULL));

    printf("Podaj dlugosc tablicy: ");
    scanf("%d", &dlugosc);

    int tab[dlugosc];

    for (int i = 0; i < dlugosc; i++){
        int liczba = rand() % 100;
        tab[i] = liczba;
    }

    printf("Podaj kierunek, w ktorym chcesz odczytac tablica\nWybierz '-1', aby czytac tablice 'w tyl'\nWybierz '1', aby czytac tablice 'w przod': ");
    scanf("%d", &kierunek);

    printf("Podaj indeks, od ktorego zaczniesz: ");
    scanf("%d", &indeks);

    printf("\nTablica poczatkowa: ");
    drukowanie(tab, dlugosc);

    printf("Tablica od indeksu k-tego: ");
    printArray(tab, dlugosc, indeks, kierunek);

    return 0;
}