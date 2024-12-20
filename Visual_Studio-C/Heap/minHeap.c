#include <stdio.h>
#include <stdlib.h>

#define SIZE 11

void insertToMinHeap(int *array, int x, int index);
void swap(int *a, int *b);
int deleteMin(int *array, int index);
void printHeap(int *array, int size);

int main()
{
    int minHeap[SIZE] = {0};
    int size = 1;

    insertToMinHeap(minHeap, 15, size++);
    insertToMinHeap(minHeap, 78, size++);
    insertToMinHeap(minHeap, 7, size++);
    insertToMinHeap(minHeap, 65, size++);
    insertToMinHeap(minHeap, 88, size++);

    printf("Heap after insertions:\n");
    printHeap(minHeap, size);

    printf("\nDeleted max: %d\n", deleteMin(minHeap, size--));
    printf("Heap after deleting max:\n");
    printHeap(minHeap, size);

    printf("\nDeleted max %d\n", deleteMin(minHeap, size--));
    printf("Heap after deleting max:\n");
    printHeap(minHeap, size);

    return 0;
}


void insertToMinHeap(int *array, int x, int index)
{
    if (index == SIZE)
    {
        printf("Heap is full!\n");
    }
    else
    {
        array[index] = x;

        while (index != 1 && array[index / 2] > array[index])
        {
            swap(&array[index / 2], &array[index]);
            index /= 2;
        }
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int deleteMin(int *array, int index)
{
    int min, i = 1;

    if (index == 1)
    {
        printf("Heap is empty..\n");
        return 0;
    }
    else
    {
        min = array[i];
        array[i] = array[index - 1];
        array[index - 1] = 0;

        while ((2 * i < index && array[i] > array[2 * i]) || (2 * i + 1 < index && array[i] > array[(2 * i) + 1]))
        {
            if (array[2 * i] < array[2 * i + 1])
            {
                swap(&array[2 * i], &array[i]);
                i = 2 * i;
            }
            else
            {
                swap(&array[(2 * i) + 1], &array[i]);
                i = (2 * i) + 1;
            }
        }

        return min;
    }
}

void printHeap(int *array, int size)
{
    for (int i = 1; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}