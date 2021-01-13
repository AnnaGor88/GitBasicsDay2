//
//  Functions.cpp
//  Arrays Function
//
//  Created by Анна Горячева on 13.01.2021.
//

#include "Functions.h"

void Sort (int arr[], const int n)
{
    for (int i=0; i<n; i++)
    {
    for (int j=i+1; j<n; j++)
        {
            if (arr[j]<arr[i])
            {
               // double buffer = arr[i];
                arr[i] = arr[j];
                arr[j] = arr[i];
            }
        }
    }
}
void Sort (double arr[], const int n)
{
    for (int i=0; i<n; i++)
    {
    for (int j=i+1; j<n; j++)
        {
            if (arr[j]<arr[i])
            {
                int buffer = arr[i];
                arr[i] = arr[j];
                arr[j] = buffer;
            }
        }
    }
}
void Sort (int arr[ROWS][COLS], const int m, const int n)
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
                        int c=arr[k][l];
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

int Sum (int arr[], const int n)
{
    int sum=0;
    for (int i=0; i<n; i++)
    {
        sum+=arr[i];
    }
    return sum;
}
double Sum (double arr[], const int n)
{
    double sum=0;
    for (int i=0; i<n; i++)
    {
            sum+= arr[i];
    }
    return sum;
}
int Sum (int arr[ROWS][COLS], const int m, const int n)
{
    int sum=0;
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
          sum += arr [i][j];
        }
    }
    return sum;
}
int Avg (int arr[], const int n)
{
    int avg=0;
    avg = (Sum (arr, n))/n;
    return avg;
}
double Avg (double arr[], const int n)
{
    double avg=0;
    avg = (Sum (arr, n))/n;
    return avg;
}
double Avg(int arr[ROWS][COLS], const int m, const int n)
{
    return double(Sum(arr,ROWS,COLS))/(m*n);
}
int minValue (int arr[], const int n)
{
    int min=arr[0];
    for(int i=0; i<n;i++)
    {
        if (arr[i]<min)
        min=arr[i];
    }
    return min;
}
double minValue (double arr[], const int n)
{
    double min=arr[0];
    for(int i=0; i<n;i++)
    {
        if (arr[i]<min)
        min=arr[i];
    }
    return min;
}
int minValue (int arr[ROWS][COLS], const int m, const int n)
{
    int minRows=0, minCols=0;
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
int maxValue (int arr[], const int n)
{
    int max=arr[0];
    for(int i=0; i<n;i++)
    {
        if (arr[i]>max)
        max=arr[i];
    }
    return max;
}
double maxValue (double arr[], const int n)
{
    double max=arr[0];
    for(int i=0; i<n;i++)
    {
        if (arr[i]>max)
        max=arr[i];
    }
    return max;
}
int maxValue (int arr[ROWS][COLS], const int m, const int n)
{
    int maxRows=0, maxCols=0;
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
