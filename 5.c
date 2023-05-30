#include <stdio.h>

// Функція для введення елементів масиву
void inputArray(int n, double arr[]) {
    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%lf", &arr[i]);
    }
}

// Функція для виведення елементів масиву
void printArray(int n, double arr[]) {
    printf("Елементи масиву:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = %.2lf\n", i, arr[i]);
    }
}

// Функція для обчислення суми парних елементів масиву
double sumOfEvenElements(int n, double arr[]) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        if ((int)arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int n;
    printf("Введіть кількість елементів масиву: ");
    scanf("%d", &n);

    double arr[n];
    inputArray(n, arr);
    printArray(n, arr);

    double sum = sumOfEvenElements(n, arr);
    printf("Сума парних елементів: %.2lf\n", sum);

    return 0;
}