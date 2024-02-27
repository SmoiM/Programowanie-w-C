//Zadeklaruj i zaincjalizuj tablicę dziesięciu liczb całkowitych i tablicę dziesięciu liczb typu double, zadeklaruj dwa wskaźniki jeden typu int, drugi double. Wypisz wartości i adresy wszystkich elementów obu tablic. Przypisz adresy pierwszych elementów tablic odpowiednim wskaźnikom i wypisz wartości i adresy wszystkich elementów tablic używając wskaźników.

#include <stdio.h>

int main(){

    int tabI[10] = {5, 4, 6, 7, 9, 1, 3, 2, 5, 6};
    double tabD[10] = {5.9, 4.3, 8.5, 4.2, 9.5, 7.1, 2.4, 1.3, 5.2, 3.14};
    int* wskI;
    double* wskD;
    
    wskI = &tabI[0];
    wskD = &tabD[0];

    printf("\nBEZ WSKAZNIKOW\n\n");

    for (int i = 0; i < 10; i++){
        printf("tabI[%d] = %d, adres tabI[%d]: %p\n", i, tabI[i], i, &tabI[i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++){
        printf("tabD[%d] = %.2f, adres tabD[%d]: %p\n", i, tabD[i], i, &tabD[i]);
    }

    printf("\nZ WSKAZNIKAMI\n\n");

    for (int i = 0; i < 10; i++){
        printf("tabI[%d] = %d, adres tabI[%d]: %p\n", i, *wskI, i, wskI);
        wskI += 1;
    }

    printf("\n");

    for (int i = 0; i < 10; i++){
        printf("tabD[%d] = %.2f, adres tabD[%d]: %p\n", i, *wskD, i, wskD);
        wskD += 1;
    }

    return 0;
}