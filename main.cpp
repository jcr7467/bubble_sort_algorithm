//Bubble sort algorithm
#include <iostream>

using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// An optimized version of Bubble Sort learned in Discrete Mathematics
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n-1; i++)
    {
        swapped = false;
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
                swapped = true;
            }
        }
        
        // IF no two elements were swapped by inner loop, then break
        if (swapped == false)
            break;
    }
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << endl;;
}

// Driver program to test above functions
int main()
{
    int arr[10] = {};
    int arrSize = sizeof(arr)/sizeof(arr[0]); // Size of the array
    
    
    cout << "Please enter "<< arrSize << " numbers to sort (:" << endl;
    
    for (int i = 0; i < arrSize ; i++) {
        cout << i+1 << ": ";
        cin >> arr[i];
    }
    
    
    bubbleSort(arr, arrSize);
    cout <<"Sorted array: \n";
    printArray(arr, arrSize);
    return 0;
}
