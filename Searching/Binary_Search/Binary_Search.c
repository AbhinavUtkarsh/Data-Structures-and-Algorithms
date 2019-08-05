#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define MAX 100
void Binary_Search(int *, int *);
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
    Binary_Search(size_p, array);
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

void Binary_Search(int *size, int *array)
{
    int i, flag = 0;
    int begin = 0;
    int end = *size;
    int mid;
    int number;
    printf("\n\nEnter the number you want to search in the Array: ");
    scanf("%d", &number);
    while (begin <= end)
    {
        mid = (end + begin) / 2;
        if (number == *(array + mid))
        {
            flag = 1;
            printf("\nThe number %d found at %d. location of the Array.\n", number, mid + 1);
            break;
        }
        else if (*(array + mid) > number)
        {
            end = mid - 1;
        }
        else
        {
            begin = mid + 1;
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
    printf("\n| This code demonstrates Binray Search via C\n");
    printf("\n| A code by: Abhinav Utkarsh\n");
    printf("\n ******************************************************\n");
}
