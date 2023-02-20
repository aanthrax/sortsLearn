#include "sorts.hpp"
#include <cstring>

void swap(int &a,int  &b){
	int temp = a;
	a = b;
	b = temp;
}


int search(int *ar, int size, int i){
        int min = ar[i];
        int index = 0;
        for(int j = i; j < size; j++){
                  if(ar[j] <= min){
                          min = ar[j];
                          index = j;
                  }
        }
        return index;
}


void bubbleSort(int *ar, int size){
        for(int i = 0; i < size - 1; i++){
                for(int j = 0; j < size - i - 1; j++){
                        if(ar[j] > ar[j + 1]){
                                swap(ar[j], ar[j + 1]);
                        }
                }
        }
}


void insertionSort(int *ar, int size){
        for (int i = 1; i< size; i++){
                 for (int j = i; j > 0 && ar[j-1] > ar[j]; j--){
                        swap(ar[j-1], ar[j]);
                 }
	}
}


void selectionSort(int *ar, int size){
        for(int i = 0; i < size; i++){
                swap(ar[i], ar[search(ar, size, i)]);
        }
}


void quickSort(int* ar, int size) {
	int left = 0;
	int right = size - 1;
	int pivot = ar[size >> 1];

	while(left <= right) {
		while(ar[left] < pivot) {
			left++;
		}

		while (ar[right] > pivot) {
			right--;
		}

		if (left <= right) {
			swap(ar[right], ar[left]);
			right--;
			left++;
		}
	}
	if (right > 0) {
		quickSort(&ar[0], right + 1);
	}

	if (left < size) {
		quickSort(&ar[left], size - left);
	}
}


static void merge(int* ar, int size, int central) {
    int left = 0;
    int right = central;
    int* arTemp = new int [size];
    int indexTemp = 0;

    while (left < central && right < size) {
        while(ar[left] <= ar[right] && left < central) {
            arTemp[indexTemp++] = ar[left++];
//            left++;
//            indexTemp++;
        }
        while(ar[left] > ar[right] && right < size) {
            arTemp[indexTemp] = ar[right];
            indexTemp++;
            right++;
        }
    }

    while (left < central) {
        arTemp[indexTemp++] = ar[left++];
    }
    while (right < size) {
        arTemp[indexTemp++] = ar[right++];
    }

    memcpy(ar, arTemp, size * sizeof(int));

    delete [] arTemp;
}


void mergeSort(int* ar, int size) {
    if (size <= 1) {
        return;
    }
    mergeSort(&ar[0], size >> 1);
    mergeSort(&ar[size >> 1], size - (size >> 1));

    merge(ar, size, size >> 1);
}

void countSort(int *bigAr, int *smallAr, int size){
	for(int j = 0; j < size; j++){
		int num = bigAr[j];
		smallAr[num] += 1;
	}


}
