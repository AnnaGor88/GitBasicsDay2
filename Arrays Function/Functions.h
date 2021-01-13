//
//  Functions.h
//  Arrays Function
//
//  Created by Анна Горячева on 13.01.2021.
//
#include <iostream>
#ifndef Functions_h
#define Functions_h
using namespace std;
const int ROWS=8;
const int COLS=7;void FillRand (int arr[], const int n);
void FillRand (double arr[], const int n);
void FillRand (int arr[ROWS][COLS], const int m, const int n);

void Print (double arr[], const int n);
void Print (int arr[], const int n);
void Print(int arr[ROWS][COLS], const int m, const int n);

void Sort (int arr[], const int n);
void Sort (double arr[], const int n);
void Sort(int arr[ROWS][COLS], const int m, const int n);

int Sum (int arr[], const int n);
double Sum (double arr[], const int n);
int Sum(int arr[ROWS][COLS], const int m, const int n);

int Avg (int arr[],const int n);
double Avg (double arr[],const int n);
double Avg(int arr[ROWS][COLS], const int m, const int n);

int minValue (int arr[], const int n);
double minValue (double arr[], const int n);
int minValue (int arr[ROWS][COLS], const int m, const int n);

int maxValue (int arr[], const int n);
double maxValue (double arr[], const int n);
int maxValue (int arr[ROWS][COLS], const int m, const int n);
#endif /* Functions_h */