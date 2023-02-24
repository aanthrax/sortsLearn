#include "testsorts.hpp"
#include "sorts.hpp"
#include "arraywork.hpp"

void test_quickSort() {

	std::cout << "\t----" << __func__ << "----" << std::endl;
	int ar_test[] = {5,3,2,8,99,23,11,6,0,7};
	for (int i = 0; i < 10; i++) {
		std::cout << ar_test[i] << " "; //std::endl;
	}
	std::cout << std::endl;
	quickSort_up(ar_test, 10);
	for (int i = 0; i < 10; i++) {
		std::cout << ar_test[i] << " "; //std::endl;
	}

	std::cout << std::endl;
	std::cout << "------------" << std::endl;
}


void test_mergeSort(){
	std::cout << "\t---" << __func__ << "---" << std::endl;
	int countTest = 1;
	{
		std::cout << "test merge sort" << countTest++ << std::endl;
		const int SIZE_AR = 10;
		int ar[SIZE_AR] = {1, 2, 1, 2, 0, 0, -9, 90, -11};
		show(ar, SIZE_AR);
		mergeSort_up(ar, SIZE_AR);
		show(ar, SIZE_AR);
	}

	std::cout << "-------------" << std::endl;
}


void test_bubbleSort(){
        std::cout << "\t---" << __func__ << "---" << std::endl;
        int countTest = 1;
        {
                std::cout << "test bubble sort" << countTest++ << std::endl;
                const int SIZE_AR = 10;
                int ar[SIZE_AR] = {1, 2, 1, 2, 0, 0, -9, 90, -11};
                show(ar, SIZE_AR);
                bubbleSort(ar, SIZE_AR);
                show(ar, SIZE_AR);
        }

        std::cout << "-------------" << std::endl;
}


void test_selectionSort(){
        std::cout << "\t---" << __func__ << "---" << std::endl;
        int countTest = 1;
        {
                std::cout << "test selection sort" << countTest++ << std::endl;
                const int SIZE_AR = 10;
                int ar[SIZE_AR] = {1, 2, 1, 2, 0, 0, -9, 90, -11};
                show(ar, SIZE_AR);
                selectionSort(ar, SIZE_AR);
                show(ar, SIZE_AR);
        }

        std::cout << "-------------" << std::endl;
}


void test_insertionSort(){
        std::cout << "\t---" << __func__ << "---" << std::endl;
        int countTest = 1;
        {
                std::cout << "test insertion sort" << countTest++ << std::endl;
                const int SIZE_AR = 10;
                int ar[SIZE_AR] = {1, 2, 1, 2, 0, 0, -9, 90, -11};
                show(ar, SIZE_AR);
                insertionSort(ar, SIZE_AR);
                show(ar, SIZE_AR);
        }

        std::cout << "-------------" << std::endl;
}



