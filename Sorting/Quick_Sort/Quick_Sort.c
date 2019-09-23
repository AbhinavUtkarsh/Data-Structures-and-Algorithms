#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100
void Quick_Sort(int *, int, int);
int Partition_Index(int *, int, int);
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
    Quick_Sort(array, 0, size - 1);
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

void Quick_Sort(int *array, int start, int end)
{
    if (start < end)
    {
        int PI = Partition_Index(array, start, end);
        Quick_Sort(array, start, PI - 1);
        Quick_Sort(array, PI + 1, end);
    }
}
int Partition_Index(int *array, int start, int end)
{
    int Pivot = *(array + end); // Using last array location as the pivot element.
    int Partition_Index = start;
    int i, temp;
    for (i = start; i < end; i++)
    {
        if (Pivot >= *(array + i))
        {
            temp = *(array + i);
            *(array + i) = *(array + Partition_Index);
            *(array + Partition_Index) = temp;
            Partition_Index++;
        }
    }
    temp = *(array + Partition_Index);
    *(array + Partition_Index) = *(array + end);
    *(array + end) = temp;
    return Partition_Index;
}

void Code_Details()
{
    printf("\n ******************************************************\n");
    printf("\n| This code demonstrates Quick Sort via C\n");
    printf("\n| A code by: Abhinav Utkarsh\n");
    printf("\n ******************************************************\n");
}