//insertion sort
#include <iostream>
using namespace std;

void print_array(int A[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << A[i] << " ";
    }   
}


void insertion_sort(int A[], int size_of_array)
{
    for(int j=1; j<size_of_array; j++)
    {
        int key = A[j];
        int i = j - 1;
        
        while(i >= 0 && A[i] > key)
        {
            A[i+1] = A[i];
            i--;
        }
        A[i+1] = key;
    }
    
    print_array(A, size_of_array);
}


int main()
{
    int array[] = {1, 56, 7, 34, 23, 78, 34, 71, 23, 22, 98, 0, 4, 10, 20};
    int size_of_array = sizeof(array) / sizeof(array[0]);
    cout << "================= Unsorted Array ===============" << endl;
    print_array(array, size_of_array);
    
    cout << "\n\n========= Sorted Array using Insertion Sort =========" << endl;
    insertion_sort(array, size_of_array);

    return 0;
}