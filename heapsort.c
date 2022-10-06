#include<stdio.h>
#include<conio.h>
void heapify(int a[], int n, int i)
    {
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l<n && a[l]>a[largest])
        largest = l;
    if (r<n && a[r]>a[largest])
        largest = r;
    if (largest != i)
        {
        int temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;
        heapify(a, n, largest);
        }
    }
void heapsort(int a[], int n)
    {
    for (int i = n / 2 - 1;i >= 0;i--)
        heapify(a, n, i);
    for (int i = n - 1;i >= 0;i--)
        {
        int temp = a[0];
        a[0] = a[i];
        a[i] = temp;
        heapify(a, i, 0);
        }
    }
void printarray(int a[], int n)
    {
    for (int i = 0;i < n;i++)
        printf("%d ", a[i]);
    }
int main()
    {
    int a[] = { 1,2,3,4,5,6,7,8,9,10 };
    int n = sizeof(a) / sizeof(a[0]);
    heapsort(a, n);
    printarray(a, n);
    return 0;
    }
