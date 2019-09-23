#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define MAX 100
void input(int *, int *);
void display(int *, int *);
int Maximum(int size, int array[]);
int Minimum(int size, int array[]);
int min(int A, int B);
int max(int A, int B);
void Code_Details();
int main()
{
    int array[MAX];
    int size;
    int *size_p;
    int Max, Min;
    size_p = &size;
    Code_Details();
    input(size_p, array);
    display(size_p, array);
    clock_t begin = clock();
    printf("\nThe Maximum of this array is: %d ", Maximum(size, array));
    printf("\nThe Minimum of this array is: %d ", Minimum(size, array));
    clock_t end = clock();
    printf("\nThe Code took %lf ticks to run.\n\n", (double)(end - begin) / CLOCKS_PER_SEC);
    return 0;
}
void input(int *size, int *array)
{
    int i;
    printf("\nEnter the number of elements in the array: ");
    scanf("%d", size);
    printf("\nEnter the elements of the array one by one: \n");
    for (i = 0; i < *size; i++)
    {
        scanf("%d", &array[i]);
    }
}

void display(int *size, int *array)
{
    int i;
    printf("\nThe array currently is : ");
    for (i = 0; i < *size; i++)
    {
        printf("\t%d", *(array + i));
    }
}

int Maximum(int size, int array[])
{
    if (size > 0)
    {
        return max(array[size - 1], Maximum(size - 1, array));
    }
    else
    {
        return array[0];
    }
}
int Minimum(int size, int array[])
{
    if (size > 0)
    {
        return min(*(array + size - 1), Minimum(size - 1, array));
    }
    else
    {
        return array[0];
    }
}
int min(int A, int B)
{
    return A < B ? A : B;
}
int max(int A, int B)
{
    return A > B ? A : B;
}
void Code_Details()
{
    printf("\n ******************************************************\n");
    printf("\n| This code demonstrates finding of Maximum & Minimum element using recursion via C\n");
    printf("\n| A code by: Abhinav Utkarsh\n");
    printf("\n ******************************************************\n");
}
