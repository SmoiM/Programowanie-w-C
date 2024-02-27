#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Dana jest macierz kwadratowa F[n][n] wypełniona liczbami całkowitymi ze zbioru {0, 1}. Odległość między dwoma elementami tej macierzy definiujemy jako: d(F[i][j], F[i'][j']) = max (|i − i'|, |j − j'|). Proszę napisać program, który:

Wczyta ze standardowego wejścia liczby n, r, oraz macierz F.
Obliczy macierz W taką, że W[i][j] jest sumą wszystkich elementów F[i'][j'] macierzy F leżących w odległości co najwyżej r (r < n) od F[i][j], czyli takich, że d(F[i][j], F[i'][j']) ≤ r.
Wypisze macierz W na standardowe wyjście.*/

int main(){
    srand(time(NULL));

    int n, odleglosc, sposob;

    printf("Podaj n: ");
    scanf("%d", &n);

    printf("Podaj odleglosc: ");
    scanf("%d", &odleglosc);

    printf("Wybierz sposob wypelnienia tablicy\n0 - sposob losowy\nInna liczba - wypelnienie samodzielne\nWybor: ");
    scanf("%d", &sposob);

    int macierz[n][n];
    int wynik[n][n];

    if (sposob){
        for (int i = 0; i < n; i++ ){
            for (int j = 0; j < n; j++){
                printf("Podaj 0 lub 1: ");
                scanf("%d", &macierz[i][j]);
            }
        }
    }
    else{
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                macierz[i][j] = rand() % 2;
            }
        }

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                printf("%2d ", macierz[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            wynik[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            for (int k = i - odleglosc; k <= i + odleglosc; k++){
                for (int l = j - odleglosc; l <= j + odleglosc; l++){
                    if (k >= 0 && k < n){
                        if (l >= 0 && l < n){
                            wynik[i][j] += macierz[k][l];
                        }
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%2d ", wynik[i][j]);
        }
        printf("\n");
    }

    return 0;
}