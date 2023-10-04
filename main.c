#include <stdio.h>
#define MAX 10

void ordenaBolha(int *vetor) {
  int mudou = 1;
  int n = MAX;
  while (mudou == 1) {
    int j = 1;
    mudou = 0;
    int i = 0;
    while (j < n) {
      if (vetor[j + 1] > vetor[j]) {
        int aux = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = aux;
        mudou = 1;
        i = j;
      }
      j++;
    }
    n = i;
  }
}

void imprimeVetor(int *vetor) {
  for (int i = 0; i < MAX; i++)
    printf("%d  ", vetor[i]);
  printf("\n");
}

int main() {
  int vet[10] = {2, 3, 7, 9, 0, 1, 4, 8, 6, 5};
  ordenaBolha(vet);
  imprimeVetor(vet);
  return 0;
}
