#include "header.h"

int min2(int num1,int num2)
{
    if(num1<num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

int max2(int num1,int num2)
{
    if(num1>num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

void cetakArr(int data[],int n)
{
    int x;
    for(x=0;x<n;x++)
    {
        printf("[%d] ",data[x]);
    }
}
int rec_max(int data[],int cur,int Arrsize)
{
    if(cur==Arrsize)
    {
        return data[cur];
    }
    else
    {
        return max2(data[cur],rec_max(data,cur+1,Arrsize));
    }

}

int rec_min(int data[],int cur,int Arrsize)
{
    if(cur==Arrsize)
    {
        return data[cur];
    }
    else
    {
        return min2(data[cur],rec_min(data,cur+1,Arrsize));
    }

}

void rec_print_all(int data[],int cur,int ArrSize)
{
    if(cur!=ArrSize-1)
    {
        printf("%d - ",data[cur]);
        rec_print_all(data,cur+1,ArrSize);
    }
    else if (ArrSize==0)
        {
            printf(" ");
        }
        else
        {
            printf("%d",data[cur]);
        }
}

float rec_mean(int data[],int cur,int n)
{
    if(cur==n-1)
    {
        return data[cur];
    }
    else if(cur==0)
        {
            return (data[cur]+rec_mean(data,cur+1,n))/n;
        }
        else
            {
                return data[cur]+rec_mean(data,cur+1,n);
            }
}

int rec_selection_sort2(int data[],int i, int j,int arr_size)
{
    int store;
    if (i<arr_size)
    {
        if (j<arr_size)
        {
            if (data[i]<data[j])
            {
                store = data[i];
                data[i]=data[j];
                data[j]=store;
            }
            rec_selection_sort2(data,i,j+1,arr_size);
        }
        rec_selection_sort2(data,i+1,j,arr_size);
    }
}
void rec_selection_sort(int data[] , int arr_size)
{
    rec_selection_sort2(data,0,0,arr_size);
    rec_print_all(data,0,arr_size);

}
