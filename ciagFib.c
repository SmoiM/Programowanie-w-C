#include <stdio.h>

int main()
{
    int f1 = 0;
    int f2 = 1;
    int los;
    
    printf("Prosze podac liczbe: ");
    scanf("%d", &los);  
    
    while (f1*f2<=los) {
        if (los == f1*f2){
            printf("Liczba %d jest iloczynem dwóch kolejnych liczb ciągu Fibbonaciego: %d i %d", los, f1, f2);
            break;
        } else{
            int pom = f1;
            f1 = f2;
            f2 = pom + f2;
        }
        if (f1*f2 > los){
            printf("Liczba %d nie jest iloczynem dwóch kolejnych liczb ciągu Fibonaciego", los);
        }
    }
    return 0;
}
