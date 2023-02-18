#ifndef SORTS_HPP
#define SORTS_HPP
#include <iostream>
#include <cstring>

void swap(int&, int&);

int search(int*, int);

void bubbleSort(int*, int);

void insertionSort(int*, int);

void selectionSort(int*, int);

void mergeSort(int*, int);

void quickSort(int*, int);

static void merge(int*, int, int);

void countSort(int*, int*, int);

#endif //SORTS_HPP
