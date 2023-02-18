#include "sorts.hpp"
#include "arraywork.hpp"
#include <chrono>



int main(){
        int step = 100;
	std::cout << "SIZE" << "\t" << "bubble sort" << "\t" << "insertion sort" << "\t" << "selection sort" << "\t" << "quick sort" << "\t" << "merge sort" << "\t" << "count sort" << std::endl;
        
	for(int SIZE = 100; SIZE < 10000000; SIZE += step){
                int* ar =  new int [SIZE];
                randomFill(ar, SIZE, 0, 999);
                std::cout << SIZE << "\t";

                //bubbleSort
                std::chrono::time_point<std::chrono::high_resolution_clock> start;
                std::chrono::duration<double> diff;
                std::chrono::time_point<std::chrono::high_resolution_clock> end;
                start = std::chrono::high_resolution_clock::now();

                bubbleSort(ar, SIZE);

                end = std::chrono::high_resolution_clock::now();
                diff = end - start;
                std::cout << diff.count() << "\t";

                //insertionSort
		randomFill(ar, SIZE, 0, 999);
                start = std::chrono::high_resolution_clock::now();


                insertionSort(ar, SIZE);

                end = std::chrono::high_resolution_clock::now();
                diff = end - start;
                std::cout << diff.count() << "\t";

                //selectionSort
		randomFill(ar, SIZE, 0, 999);
                start = std::chrono::high_resolution_clock::now();

                selectionSort(ar, SIZE);

                end = std::chrono::high_resolution_clock::now();
                diff = end - start;
                std::cout << diff.count() << "\t";


                //quickSort
		randomFill(ar, SIZE, 0, 999);
                start = std::chrono::high_resolution_clock::now();

                quickSort(ar, SIZE);

                end = std::chrono::high_resolution_clock::now();
                diff = end - start;
                std::cout << diff.count() << "\t";
		

                //mergeSort
		randomFill(ar, SIZE, 0, 999);
                start = std::chrono::high_resolution_clock::now();

                mergeSort(ar, SIZE);

                end = std::chrono::high_resolution_clock::now();
                diff = end - start;
                std::cout << diff.count() << "\t";

                //countSort
//                start = std::chrono::high_resolution_clock::now();

//              int* smallAr[1000];
//                countSort(ar, smallAr, SIZE);

//                end = std::chrono::high_resolution_clock::now();
//                diff = end - start;
//                std::cout << diff.count() << "\t";



                std::cout<<std::endl;
                delete[] ar;

                if(SIZE >= 500 && SIZE < 1000){
                         step = 250;
                }
                else  if(SIZE >= 1000 && SIZE < 10000){
                         step = 1000;
                }
		else  if(SIZE >= 10000 && SIZE < 100000){
                         step = 5000;
                }
                else if(SIZE >= 100000 && SIZE < 200000){
                         step = 10000;
                }
                else  if(SIZE >= 200000 && SIZE < 1000000){
                         step = 100000;
                }
                else  if(SIZE >= 1000000 && SIZE < 10000000){
                         step = 1000000;
                }
	}
	return 0;
}
