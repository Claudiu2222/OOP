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

    void InsertSort(bool ascendent = false);

    void QuickSort(bool ascendent = false);

    void BubbleSort(bool ascendent = false);

    void Print();

    int  GetElementsCount();

    int  GetElementFromIndex(int index);

};

