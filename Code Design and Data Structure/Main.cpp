#include <iostream>
#include "DynamicArray.h"

///Create a function that will sort an array of integers using bubble sort
///Print the array before and after it's been sorted

using namespace std;

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

 
void bubbleArray(int arr[], int n)
{
    //Print array
    int i, j;
    for (i = 0; i < n - 1; i++)

 
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}


void printArray(int arr[], int length)
{
    int i;
    for (i = 0; i < length; i++)
        cout << arr[i] << " ";
    cout << endl;
}


int main()
{
    DynamicArray<int> test = DynamicArray<int>();
    test.addItem(5);
    test.addItem(4);
    test.addItem(3);
    test.addItem(2);
    test.addItem(1);
    test.sortItem();
    test.print();
    system("pause");
   
}
