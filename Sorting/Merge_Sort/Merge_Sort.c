#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100
void Merge_Sort(int[], int, int);
void Merge(int[], int, int, int, int);
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
    Merge_Sort(array, 0, size - 1);
    clock_t end = clock();
    printf("\n\nThe array after sorting...\n");
    display(size_p, array);
    printf("\n\nThe Code took %lf ticks to run.\n\n", (double)(end - begin) / CLOCKS_PER_SEC);
    return 0;
}

void input(int *size, int array[])
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

void Merge_Sort(int array[], int begin, int end)
{
    int Middle_Element;
    if (begin < end)
    {
        Middle_Element = (begin + end) / 2;
        Merge_Sort(array, begin, Middle_Element);
        Merge_Sort(array, Middle_Element + 1, end);
        Merge(array, begin, Middle_Element, Middle_Element + 1, end);
    }
}
void Merge(int array[], int begin, int Middle_Element, int Middle_Plus_1, int end)
{
    int Dummy[MAX];
    int i, j, k;
    i = begin;         //Start of the first array
    j = Middle_Plus_1; //Start of the second array
    k = 0;

    while (i <= Middle_Element && j <= end)
    {
        if (array[i] < array[j])
        {
            Dummy[k++] = array[i++];
        }
        else
        {
            Dummy[k++] = array[j++];
        }
    }
    while (i <= Middle_Element) // Copying the leftovers of 1st array.
    {
        Dummy[k++] = array[i++];
    }
    while (j <= end) // Copying the leftovers of 2nd array.
    {
        Dummy[k++] = array[j++];
    }
    for (i = begin; i <= end; i++) // Copying the elements from our dummy array.
    {
        array[i] = Dummy[i];
    }
}
void Code_Details()
{
    printf("\n ******************************************************\n");
    printf("\n| This code demonstrates Merge Sort via C\n");
    printf("\n| A code by: Abhinav Utkarsh\n");
    printf("\n ******************************************************\n");
}