#pragma once
class Sort
{
    // add data members
    int* vector, nrElem;
public:

    // add constuctors
    Sort(int numOfElements, int min, int max);
    Sort(int* vectorr, int numOfElements);
    Sort(int count, ...);
    Sort(char* string);
    Sort();
    void ReverseArray();
    int partitionQuickSort(int low, int high);
    void quicksort(int low, int high);
    int ReversedNumber(int num);
    void InsertSort(bool ascendent = false);

    void QuickSort(bool ascendent = false);

    void BubbleSort(bool ascendent = false);

    void Print();

    int  GetElementsCount();

    int  GetElementFromIndex(int index);

};

