#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define MAX 100
struct item
{
    int Profit, Weight;
    float Ratio;
};
struct item ItemList[MAX];
void input(int *);
void display(int *);
void Knapsack(int *);
void Code_Details();
int main()
{
    int size;
    int *size_p;
    size_p = &size;
    Code_Details();
    input(size_p);
    display(size_p);
    clock_t begin = clock();
    Knapsack(size_p);
    clock_t end = clock();
    printf("\nThe Code took %lf ticks to run.\n\n", (double)(end - begin) / CLOCKS_PER_SEC);
    return 0;
}
void input(int *size)
{
    int i;
    printf("\nEnter the number of Items: ");
    scanf("%d", size);
    printf("\nEnter the Item(Profit) and it's weight one by one: \n");
    for (i = 0; i < *size; i++)
    {
        scanf("%d", &ItemList[i].Profit);
        scanf("%d", &ItemList[i].Weight);
        ItemList[i].Ratio = (double)ItemList[i].Profit / ItemList[i].Weight;
    }
}

void display(int *size)
{
    int i;
    printf("\nThe Item List currently is : ");
    for (i = 0; i < *size; i++)
    {
        printf("\n\tItem Profit: %d , Item Weight: %d, Ratio(P/W): %f", ItemList[i].Profit, ItemList[i].Weight, ItemList[i].Ratio);
    }
}
void Knapsack(int *size)
{
    int MAX_SIZE, i = 1, j;
    struct item temp;
    printf("\n\nEnter the maximum Size of the bag: ");
    scanf("%d", &MAX_SIZE); // getting the max capacity of our knapsack bag
    // Sorting by ratio in decreasing order to pick the right item
    for (i = 1; i < MAX_SIZE; i++)
    {
        for (j = 0; j < *size - i; j++)
        {
            if (ItemList[j + 1].Ratio > ItemList[j].Ratio)
            {
                temp = ItemList[j + 1];
                ItemList[j + 1] = ItemList[j];
                ItemList[j] = temp;
            }
        }
    }

    // Initializing knapsack variables
    int Current_Weight = 0;
    double Knapsack = 0;
    //
    for (i = 0; i < *size; i++) // iterating over the items
    {
        if (ItemList[i].Weight + Current_Weight < MAX_SIZE) //selecting the items with highest P/W ratio if we still have space in the bag.
        {
            Current_Weight += ItemList[i].Weight;
            Knapsack += ItemList[i].Profit;
            printf("\n\tSelected Item with %d Profit and %d Weight, Current Weight = %d, Current Profit =  %f", ItemList[i].Profit, ItemList[i].Weight, Current_Weight, Knapsack);
        }
        else // when not enough place left for whole item then breaking it.
        {
            int Left_Over = MAX_SIZE - Current_Weight;
            Knapsack += ItemList[i].Profit * ((double)Left_Over / ItemList[i].Weight); // the profit times the fractional amount of that item we can take accommodate.
            break;
        }
    }
    printf("\n\n->The maximum profit that can be gained from the given items is: %f", Knapsack);
}
void Code_Details()
{
    printf("\n ******************************************************\n");
    printf("\n| This code demonstrates Knapsack Problem via C\n");
    printf("\n| A code by: Abhinav Utkarsh\n");
    printf("\n ******************************************************\n");
}