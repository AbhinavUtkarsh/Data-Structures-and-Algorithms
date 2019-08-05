#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100
void Linear_Search(int *, int *);
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
    Linear_Search(size_p, array);
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

void Linear_Search(int *size, int *array)
{
    int i;
    int number;
    int flag = 0;
    printf("\nEnter the number you want to search in the Array: ");
    scanf("%d", &number);
    for (i = 0; i < *size; i++)
    {
        if (number == *(array + i))
        {
            flag = 1;
            printf("\nThe number %d found at %d. location of the Array.", number, i + 1);
        }
    }
    if (flag == 0)
    {
        printf("\nThe number %d not found in the given Array.\n\n", number);
    }
}

void Code_Details()
{
    printf("\n ******************************************************\n");
    printf("\n| This code demonstrates Linear Search via C\n");
    printf("\n| A code by: Abhinav Utkarsh\n");
    printf("\n ******************************************************\n");
}