#include<stdio.h>

//Paragon fiskalny zawiera następujące informacje: cenę jednostkową netto a, liczbę zakupionych sztuk towaru x oraz wysokość podatku VAT podaną w procentach p. Napisz program, który wczytuje powyższe dane z klawiatury, a następnie oblicza wartość netto zakupionego towaru, wartość podatku VAT oraz wartość towaru brutto. Wyniki obliczeń należy wypisać na ekranie w formie uproszczonego "paragonu fiskalnego".

int main(){  
    float a=0;  
    int x=0;  
    int p=0;  

    printf("Podaj cene za sztuke: "); 
    scanf ("%f", &a);  

    printf("Podaj liczbe sztuk: ");  
    scanf ("%i", &x);  

    printf("Podaj wartosc podatku: ");  
    scanf ("%d", &p);      

    float netto = x*a;  
    float podatek = netto*p*0.01;  
    float brutto = netto + podatek;  

    printf("\n________________________________\n\tPARAGON FISKALNY\n________________________________");  
    
    printf("\nprodukt %.d * %.2f \n", x, a);  
    printf("Kwota netto: %.2f\n", netto);  
    printf("Podatek: %.2d %%\n", p);
    printf("Wartosc podatku: %.2f\n", podatek);  
    printf("Kwota brutto: %.2f\n", brutto);  

    return 0;  
}  