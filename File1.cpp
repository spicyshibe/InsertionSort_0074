#include <iostream>
using namespace std;

int arr[20];
int n;

void input()
{
    while (true)
    {
        cout << "masukkan jumlah data pada array :";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else 
        {
            cout << "\nArray yang anda masukkan maksimal 20 elemen.\n";
        }
    }
    cout << endl;
    cout << "==================" << endl;
    cout << "masukkan elemen array" << endl;
    cout << "==================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}

void insertionSort()
{
    int temp;
    int j, i;

    for (i = 1; i <= n - 1; i++)
    {
        temp = arr[i];
        j = i -1;

        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = temp;
    }
}

void display()
{
    cout << endl;
    cout << "===========================" << endl;
    cout << "total pass = " << n - 1 << endl;
    cout << "===========================" << endl;
    cout << "elemen array yang telah tersusun" << endl;
    cout << "===========================" << endl;
}