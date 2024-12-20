/*Write a function template selection Sort. Write a program that inputs, sorts
and outputs an integer array and a float array*/
#include <iostream>
#include <vector>
using namespace std;
template <class T>
void sort(T a[], int n)
{
    int pos_min, i;
    T temp;
    for (int i = 0; i < n - 1; i++)
    {
        pos_min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[pos_min])
                pos_min = j;
        }
        if (pos_min != i)
        {
            temp = a[i];
            a[i] = a[pos_min];
            a[pos_min] = temp;
        }
    }
    cout << "Sorted elements are" << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << endl;
}
int main()
{
    int n, op;
    int a[10];
    float b[10];
    do
    {
        cout << "1)Sort Integer Value" << endl;
        cout << "2)Sort Float Value" << endl;
        cout << "3)Exit" << endl;
        cin >> op;
        switch (op)
        {
        case 1:
            cout << "Enter Number of elements" << endl;
            cin >> n;
            cout << "Enter each element" << endl;
            for (int i = 0; i < n; i++)
            {
                cin >> a[i];
            }
            sort<int>(a, n);
            break;
        case 2:
            cout << "Enter Number of elements" << endl;
            cin >> n;
            cout << "Enter each element" << endl;
            for (int i = 0; i < n; i++)
            {

                cin >> b[i];
            }
            sort<float>(b, n);
            break;
        case 3:
            cout << "Exiting....." << endl;
            break;
        default:
            cout << "Enter Value from 1-3" << endl;
        }
    } while (op != 3);
    return 0;
}