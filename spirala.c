#include <stdio.h>

/*Dana jest tablica kwadratowa int t[N][N]. Proszę napisać funkcję wypełniającą tablicę t liczbami naturalnymi po spirali.

Na przykład dla N = 4 program powinien wypisać:

 1  2  3  4
12 13 14  5
11 16 15  6
10  9  8  7

*/

int main(){  
    int n;  
    int kierunek = 1; 
    int kolumna = 0; 
    int wiersz = 0; 

    printf("Podaj wymiary tablicy: ");  
    scanf ("%d", &n);  

    int tab[n][n];  
    int dolneOgraniczenie = n - 1; 
    int praweOgraniczenie = n - 1; 
    int leweOgraniczenie = 0; 
    int gorneOgraniczenie = 1; 

    for (int i = 1; i <= n * n; i++){ 
        if (kierunek == 1){                  // w prawo 
            tab[wiersz][kolumna] = i; 

            if (kolumna == praweOgraniczenie){ 
                kierunek = 2; 
                wiersz += 1;
                praweOgraniczenie -= 1; 
                continue;
            } 
            kolumna += 1; 
        } 

        if (kierunek == 2){                  // w dol 
            tab[wiersz][kolumna] = i; 

            if (wiersz == dolneOgraniczenie){ 
                kierunek = 3; 
                kolumna -= 1; 
                dolneOgraniczenie -= 1; 
                continue;
            } 
            wiersz += 1; 
        } 

        if (kierunek == 3){                  // w lewo 
            tab[wiersz][kolumna] = i; 
            if (kolumna == leweOgraniczenie){ 
                kierunek = 4; 
                wiersz -= 1; 
                leweOgraniczenie += 1; 
                continue;
            } 
            kolumna -= 1; 
        } 

        if (kierunek == 4){                  // w gore 
            tab[wiersz][kolumna] = i; 

            if (wiersz == gorneOgraniczenie){ 
                kierunek = 1; 
                kolumna += 1; 
                gorneOgraniczenie += 1; 
                continue;
            } 
            wiersz -= 1; 
        } 
    } 

    for (int i = 0; i < n; i++){ 
        for (int j = 0; j < n; j++){ 
            printf("%4d", tab[i][j]);
        } 
        printf ("\n"); 
    } 

    return 0;  
    }  
