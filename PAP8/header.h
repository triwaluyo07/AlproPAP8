#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

int min2(int num1,int num2);
int max2(int num1,int num2);
int rec_max(int data[],int cur,int Arrsize);
int rec_min(int data[],int cur,int Arrsize);
void rec_print_all(int data[],int cur,int ArrSize);
float rec_mean(int data[],int cur,int n);
int rec_selection_sort2(int data[],int i, int j,int arr_size);
void rec_selection_sort(int data[] , int arr_size);

int i;
float hasil;
#endif // HEADER_H_INCLUDED
