#include <iostream>
using namespace std;

void merge(int A[], int left, int middle, int right)
{
    int X1 = middle - left + 1;
    int X2 = right - middle;
    
    int A1[X1];
    int A2[X2];
    
    for(int i=0; i<X1; i=i+1) { A1[i] = A[left + i];}
    for(int j=0; j<X2; j=j+1) { A2[j] = A[middle + 1 + j];}
    
    int i=0, j=0, k=left;
    
    while(i < X1 && j < X2)
    {
        if(A1[i] < A2[j])
        {
            A[k] = A1[i];
            i++;
        }
        else
        {
            A[k] = A2[j];
            j++;
        }
        k++;
    }
    
    while(i < X1)
    {
        A[k] = A1[i];
        i++;
        k++;
    }
    
    while(j < X2)
    {
        A[k] = A2[j];
        j++;
        k++;
    }
    
}

void merge_sort(int A[], int left, int right)
{
    if(left >= right)
    {
        return;
    }
    
    int middle = left + (right - left) / 2;
    merge_sort(A, left, middle);
    merge_sort(A, middle+1, right);
    merge(A, left, middle, right);
}

int main()
{
    int array[] = {23, 45, 65, 21, 67, 3, 1, 89, 4, 0, 60, 23, 11, 10, 1 ,100, 7};
    int size_of_array = sizeof(array) / sizeof(array[0]);
    
    cout << "============== Original Array ===============" << endl;
    for(int i=0; i<size_of_array; i++)
    {
        cout << array[i] << " ";
    }
    
    cout << "\n\n======= Array after using merge sort ========" << endl;
    int left = 0;
    int right = size_of_array-1;
    
    merge_sort(array, left, right);
    for(int i=0; i<size_of_array; i++)
    {
        cout << array[i] << " ";
    }
    
}