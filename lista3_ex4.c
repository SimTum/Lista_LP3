#include <stdio.h>
#include <stdlib.h> // malloc
#include <limits.h>
#include <alg.h> // min | max

int* sieve(int maxFound) {
    int *primes = malloc((maxFound + 1) * sizeof(int));
    if (primes == NULL) return primes;

    primes[0] = 0;
    primes[1] = 0;

    for (int i = 2; i <= maxFound; i++) {
        primes[i] = 1;
    }

    for (int i = 2; i <= maxFound; i++) {
        if (primes[i]) {
            for (int j = i * i; j <= maxFound; j += i) {
                primes[j] = 0;
            }
        }
    }

    return primes;
}

int main() {
    int data[4][3];

    int secondFourthRowSum = 0;
    int primeSum = 0;
    int maxValue = INT_MIN;
    float average = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("[%d][%d] Digite um numero: ", i, j);
            scanf("%d", &data[i][j]);

            average += data[i][j];
            maxValue = max(maxValue, data[i][j]);

            // 2nd e 4th linha
            if (i % 2 != 0) {
                secondFourthRowSum += data[i][j];
            }
        }
    }

    int* isPrime = sieve(maxValue);
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if (isPrime[data[i][j]]) primeSum += data[i][j];
        }
    }
    free(isPrime);


    average /= 4.0*3;

    printf("Soma dos numeros na segunda e quarta linha: %d\n", secondFourthRowSum);
    printf("Soma dos numeros primos: %d\n", primeSum);
    printf("Media dos numeros da matriz: %.2f\n", average);
    printf("Maior numero da matriz: %d\n", maxValue);

    return 0;
}
