//
//  Functions.cpp
//  Arrays Function
//
//  Created by Анна Горячева on 14.01.2021.
//
#include "Header.h"

template<typename T>void Print (T arr[], const int n)
{
    for (int i=0; i<n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
template<typename T>void Print (T arr[ROWS][COLS], const int m, const int n)
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
template<typename T>void Sort (T arr[], const int n)
{
    for (int i=0; i<n; i++)
    {
    for (int j=i+1; j<n; j++)
        {
            if (arr[j]<arr[i])
            {
                T buffer = arr[i];
                arr[i] = arr[j];
                arr[j] = buffer ;
            }
        }
    }
}
template<typename T>void Sort (T arr[ROWS][COLS], const int m, const int n)
{
    int iterations=0;
    int exchanges=0;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            for(int k=i; k<m; k++)
            {
//                int l;
//                if(k==i)l=j+1;
//                else l=0;
                for(int l= k == i ? j+1: 0; l<n;l++)
                {
                    iterations++;
                    if (arr[k][l]<arr[i][j])
                    {
                        T c=arr[k][l];
                        arr[k][l]=arr[i][j];
                        arr[i][j]=c;
                        exchanges++;
                    }
                }
            }
        }
    }
    cout <<iterations << endl;
    cout << exchanges << endl;
}

template<typename T>T Sum (T arr[], const int n)
{
    T sum=0;
    for (int i=0; i<n; i++)
    {
        sum+=arr[i];
    }
    return sum;
}
template<typename T>T Sum (T arr[ROWS][COLS], const int m, const int n)
{
    T sum=0;
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
          sum += arr [i][j];
        }
    }
    return sum;
}

template<typename T>double Avg (T arr[], const int n)
{
    int avg=0;
    avg = (Sum (arr, n))/n;
    return avg;
}
template<typename T>double Avg(T arr[ROWS][COLS], const int m, const int n)
{
    return double(Sum(arr,ROWS,COLS))/(m*n);
}

template<typename T>T minValue (T arr[], const int n)
{
    T min=arr[0];
    for(int i=0; i<n;i++)
    {
        if (arr[i]<min)
        min=arr[i];
    }
    return min;
}
template<typename T>T minValue (T arr[ROWS][COLS], const int m, const int n)
{
    T minRows=0, minCols=0;
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (arr [i][j]<arr[minRows][minCols])
            {
                minRows=i;
                minCols=j;
            }
        }
    }
    return arr[minRows][minCols];
}

template<typename T>T maxValue (T arr[], const int n)
{
    T max=arr[0];
    for(int i=0; i<n;i++)
    {
        if (arr[i]>max)
        max=arr[i];
    }
    return max;
}
template<typename T>T maxValue (T arr[ROWS][COLS], const int m, const int n)
{
    T maxRows=0, maxCols=0;
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (arr [i][j]>arr[maxRows][maxCols])
            {
                maxRows=i;
                maxCols=j;
            }
        }
    }
    return arr[maxRows][maxCols];
}
