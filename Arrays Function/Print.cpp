//
//  Print.cpp
//  Arrays Function
//
//  Created by Анна Горячева on 13.01.2021.
//

#include "Functions.h"
void Print (int arr[], const int n)
{
    for (int i=0; i<n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
void Print (double arr[], const int n)
{
    for (int i=0; i<n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
void Print (int arr[ROWS][COLS], const int m, const int n)
{
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<< arr[i][j]<<"\t";
        }
        cout << endl;
    }
}
