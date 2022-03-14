#pragma once
class Sortt

{
    int* vector;

    int nr_elem;

    void swap(int* a, int* b);

    int partition(int* a, int low, int high, bool ascendent);

    void quickSortt(int* a, int low, int high, bool ascendent);

public:

    Sortt(int numar_elemente, int min_element, int max_element);

    Sortt(int* vector, int numar_elemente);

    Sortt(int count,bool ok);

    Sortt(int count, ...);

    Sortt(char* c);

    void InsertSort(bool ascendent = true);

    void QuickSort(bool ascendent = false);
    
    void BubbleSort(bool ascendent = false);

    void Print();

    int  GetElementsCount();

    int  GetElementFromIndex(int index);

};
