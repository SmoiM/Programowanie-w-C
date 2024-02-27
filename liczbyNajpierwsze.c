#include <stdio.h>

//Dana jest liczba całkowita dodatnia n. Napisz program, który znajduje wszystkie liczby pierwsze mniejsze od n, których cyfry tworzą ciąg niemalejący.

int main()
{
    int n;
    char cyfry[15];

    printf("Podaj liczbe: ");
    scanf("%d",&n);

    for (int i = 2; i < n; i++){
        int pierwsza = 0;
        int najpierwsza = 0;
        int dlugosc = 0;
        int liczba = i;
        int pom = liczba;

        //zamiana liczby na typ char
        sprintf(cyfry, "%d", liczba);

        for (int j = 2; j < liczba; j++){
            if (liczba % j == 0){
                pierwsza = 1;
                break;
            }
        }

        if (pierwsza == 0){
            while (pom > 0){
                pom /= 10;
                dlugosc += 1;
            }

            if (liczba / 10 != 0){
                for (int k = 0; k < dlugosc - 1; k++){
                    if (cyfry[k] > cyfry[k + 1]){
                        najpierwsza = 1;
                    }
                }
            
            }
            
            if (najpierwsza == 0){
                printf("Liczba najpierwsza: %d\n", liczba);
            }
        }
    }
    return 0;
}