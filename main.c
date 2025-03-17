#include <stdio.h>

int main()
{
    system("chcp 65001");

    int n;
    printf("Введіть кількість елементів масиву Х ");
    scanf("%d", &n);

    int X[n];
    printf("Введіть %d цілих чисел: \n", n);
    for (int i = 0; i < n; i += 1) 
    {
        scanf("%d", &X[i]);
    }

    int Z[n];
    for (int i = 0; i < n; i += 1) 
    {
        Z[i] = X[n - 1 - i];
    }
    
    int max = Z[0];
    for (int i = 1; i < n; i += 1) 
    {
        if (Z[i] > max) 
        {
            max = Z[i];
        }
    }
    
    printf("Масив Z: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", Z[i]);
    }
    printf("\nНайбільший елемент у масиві Z: %d\n", max);
    
    return 0;

}