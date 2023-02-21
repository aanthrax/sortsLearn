#ifndef SORTS_HPP
#define SORTS_HPP
#include <iostream>
#include <cstring>

void swap(int&, int&);

int search(int*, int);

void bubbleSort(int*, int);

void insertionSort(int*, int);

void selectionSort(int*, int);

void quickSort_up(int*, int);

void quickSort_down(int*, int);

static void merge_up(int*, int, int);
void mergeSort_up(int*, int);

static void merge_down(int*, int, int);
void mergeSort_down(int*, int);

void countSort(int*, int*, int);

#endif //SORTS_HPP
