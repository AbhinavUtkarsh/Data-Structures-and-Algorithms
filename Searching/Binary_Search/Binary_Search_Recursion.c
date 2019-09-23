#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define MAX 100
int number;
int Binary_Search(int *, int, int);
void input(int *, int *);
void display(int *, int *);
void Code_Details();
int main()
{
    int array[MAX];
    int size;
    int *size_p;
    size_p = &size;
    int flag;
    Code_Details();
    input(size_p, array);
    display(size_p, array);
    clock_t begin = clock();
    flag = Binary_Search(array, 0, size);
    clock_t end = clock();
    if (flag == 0)
    {
        printf("\nThe number %d not found in the given Array.\n\n", number);
    }
    else
    {
        printf("\nThe number %d found at %d. location of the Array.\n", number, flag + 1);
    }

    printf("\nThe Code took %lf ticks to run.\n\n", (double)(end - begin) / CLOCKS_PER_SEC);
    return 0;
}
int Binary_Search(int *array, int begin, int end)
{
    int mid = (begin + end) / 2;
    if (begin > end)
    {
        return 0;
    }
    else if (array[mid] > number)
    {
        Binary_Search(array, begin, mid - 1);
    }
    else if (array[mid] < number)
    {
        Binary_Search(array, mid + 1, end);
    }
    else
    {
        return mid;
    }
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
    printf("\n\nEnter the number you want to search in the Array: ");
    scanf("%d", &number);
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
void Code_Details()
{
    printf("\n ******************************************************\n");
    printf("\n| This code demonstrates Binray Search with Recursion via C\n");
    printf("\n| A code by: Abhinav Utkarsh\n");
    printf("\n ******************************************************\n");
}