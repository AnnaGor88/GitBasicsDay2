//
//  Header.h
//  Arrays Function
//
//  Created by Анна Горячева on 14.01.2021.
//
#pragma once
#include <iostream>
using namespace std;
const int ROWS=8;
const int COLS=7;
void FillRand (int arr[], const int n);
void FillRand (double arr[], const int n);
void FillRand (int arr[ROWS][COLS], const int m, const int n);
template<typename T>void Print (T arr[], const int n);
template<typename T>void Print(T arr[ROWS][COLS], const int m, const int n);

template<typename T>void Sort (T arr[], const int n);
template<typename T>void Sort(T arr[ROWS][COLS], const int m, const int n);

template<typename T>T Sum (T arr[], const int n);
template<typename T>T Sum(T arr[ROWS][COLS], const int m, const int n);

template<typename T>double Avg (T arr[],const int n);
template<typename T>double Avg(T arr[ROWS][COLS], const int m, const int n);

template<typename T>T minValue (T arr[], const int n);
template<typename T>T minValue (T arr[ROWS][COLS], const int m, const int n);

template<typename T>T maxValue (T arr[], const int n);
template<typename T>T maxValue (T arr[ROWS][COLS], const int m, const int n);
void FillRand (int arr[], const int n);
void FillRand (double arr[], const int n);
void FillRand (int arr[ROWS][COLS], const int m, const int n);
template<typename T>void Print (T arr[], const int n);
template<typename T>void Print(T arr[ROWS][COLS], const int m, const int n);

template<typename T>void Sort (T arr[], const int n);
template<typename T>void Sort(T arr[ROWS][COLS], const int m, const int n);

template<typename T>T Sum (T arr[], const int n);
template<typename T>T Sum(T arr[ROWS][COLS], const int m, const int n);

template<typename T>double Avg (T arr[],const int n);
template<typename T>double Avg(T arr[ROWS][COLS], const int m, const int n);

template<typename T>T minValue (T arr[], const int n);
template<typename T>T minValue (T arr[ROWS][COLS], const int m, const int n);

template<typename T>T maxValue (T arr[], const int n);
template<typename T>T maxValue (T arr[ROWS][COLS], const int m, const int n);
void FillRand (int arr[], const int n);
void FillRand (double arr[], const int n);
void FillRand (int arr[ROWS][COLS], const int m, const int n);
template<typename T>void Print (T arr[], const int n);
template<typename T>void Print(T arr[ROWS][COLS], const int m, const int n);

template<typename T>void Sort (T arr[], const int n);
template<typename T>void Sort(T arr[ROWS][COLS], const int m, const int n);

template<typename T>T Sum (T arr[], const int n);
template<typename T>T Sum(T arr[ROWS][COLS], const int m, const int n);

template<typename T>double Avg (T arr[],const int n);
template<typename T>double Avg(T arr[ROWS][COLS], const int m, const int n);

template<typename T>T minValue (T arr[], const int n);
template<typename T>T minValue (T arr[ROWS][COLS], const int m, const int n);

template<typename T>T maxValue (T arr[], const int n);
template<typename T>T maxValue (T arr[ROWS][COLS], const int m, const int n);
