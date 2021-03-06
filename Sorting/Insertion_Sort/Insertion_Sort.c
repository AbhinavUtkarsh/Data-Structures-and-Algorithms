#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100
void Insertion_Sort(int *, int *);
void input(int *, int *);
void display(int *, int *);
void Code_Details();

int main()
{
    int array[MAX];
    int size;
    int *size_p;
    size_p = &size;
    Code_Details();
    input(size_p, array);
    display(size_p, array);
    clock_t begin = clock();
    Insertion_Sort(size_p, array);
    clock_t end = clock();
    printf("\n\nThe array after sorting...\n");
    display(size_p, array);
    printf("\n\nThe Code took %lf ticks to run.\n\n", (double)(end - begin) / CLOCKS_PER_SEC);
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

void Insertion_Sort(int *size, int *array)
{
    int j, i;
    int key;

    for (j = 1; j < *size; j++)
    {

        key = *(array + j);
        i = j - 1;
        while (i >= 0 && *(array + i) > key)
        {
            *(array + i+1) = *(array + i);
            i = i - 1;
        }
        *(array + i + 1) = key;
    }
}

void Code_Details()
{
    printf("\n ******************************************************\n");
    printf("\n| This code demonstrates Insertion Sort via C\n");
    printf("\n| A code by: Abhinav Utkarsh\n");
    printf("\n ******************************************************\n");
}