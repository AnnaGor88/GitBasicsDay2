//
//  main.cpp
//  Arrays Function
//
//  Created by Анна Горячева on 14.12.2020.
//

#include "Functions.h"

#define delimeter "\n-----------------------------------------------------\n"
int main()
{
    const int n=10;
   // const int m=8;
    int arr[n];
    FillRand(arr,n);
    Print(arr,n);
    Sort (arr,n);
    Print(arr,n);
    Sum (arr, n);
    Avg (arr,n);
    minValue (arr,n);
    maxValue (arr,n);
    
    double brr[n];
    FillRand(brr,n);
    Print(brr,n);
    Sort (brr,n);
    Print(brr,n);
    Sum (brr,n);
    Avg (brr,n);
    minValue (arr,n);
    maxValue (arr,n);
    cout << delimeter;
    
    int i_arr2[ROWS][COLS];
    FillRand(i_arr2,ROWS,COLS);
    Print(i_arr2,ROWS,COLS);
    Sum(i_arr2,ROWS,COLS);
    cout << delimeter;
    cout  << minValue(i_arr2,ROWS,COLS);
    cout << delimeter;
    cout << maxValue(i_arr2,ROWS,COLS);
    cout << delimeter;
    Avg(i_arr2,ROWS,COLS);
    cout << delimeter;
    Sort(i_arr2,ROWS,COLS);
    cout << delimeter;
    Print(i_arr2,ROWS,COLS);
}
    
