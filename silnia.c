#include <stdio.h>

int silnia(int n, int *wynik, int dlugosc){
    int nast=0;

    for (int i = 0; i < dlugosc; i++) {
        int product = wynik[i] * n + nast;

        wynik[i] = product % 10;
        nast = product / 10;
    }

    while (nast > 0){
        wynik[dlugosc] = nast % 10;
        nast = nast / 10;
        dlugosc++;
    }
    return dlugosc;
}

void liczenie(int n){

    int wynik[10000];
    int dlug = 1;

    wynik[0] = 1;

    for (int i = 2; i <= n; i++) {
        dlug = silnia(i, wynik, dlug);
    }

    printf("Obliczona silnia: ");
    for (int i = dlug - 1; i >= 0; i--){
        printf("%d", wynik[i]);
    }
} 

int main(){
    int liczba;

    printf("Podaj liczbe: ");
    scanf("%d", &liczba);

    liczenie(liczba);

    return 0;
}