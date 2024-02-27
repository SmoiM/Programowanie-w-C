#include <stdio.h>

/*Liczba doskonała jest to taka liczba naturalna, która jest sumą wszystkich swych dzielników właściwych (to znaczy od niej mniejszych).
Najmniejszą liczbą doskonałą jest 6, ponieważ jej dzielnikami właściwymi są 1, 2, 3 i 1 + 2 + 3 = 6.
Napisz program, który znajduje wszystkie liczby doskonałe w zadanym przedziale oraz ich liczbę.*/

int main(){

int pom = 0;
int min, max;

printf("\nPodaj wartosc minimalna: ");
scanf("%d", &min);

printf("\nPodaj wartosc maksymalna: ");
scanf("%d", &max);

printf("Liczby doskonale w podanym przedziale to:\n");

for (int i = min; i <= max; i++){
    int liczba = i;
    int wsk = 0;
    int suma = 0;
    int dziel[100] = {};

    for (int i = 1; i < liczba; i++){
        if (liczba % i == 0){
            dziel[wsk] = i;
            wsk += 1;
        }
    }

    //liczenie sumy
    for (int i = 0; i < wsk; i++){
        suma += dziel[i];
    }

    //wypisanie liczb doskonalych
    if (suma == liczba){
        pom++;
        printf("%d\n", liczba);
        }
    }

printf("Jest ich: %d", pom);

return 0;
}

