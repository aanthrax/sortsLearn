#include "sorts.hpp"
#include "arraywork.hpp"
#include <chrono>



int main(){
        int step = 100;
	int time_bubble = 0;
	int time_insertion = 0;
	int time_selection = 0;
	int time_quick = 0;
	int time_merge = 0;
	std::cout << "SIZE" << '\t' << "bubble sort" << '\t' << "insertion sort" << '\t' << "selection sort" << '\t' << "quick sort" << '\t' << "merge sort" << '\t' << std::endl;
        
	for(int SIZE = 100; SIZE <= 10000000; SIZE += step){
                int* ar =  new int [SIZE];
                std::cout << SIZE << '\t';

                //bubbleSort
		randomFill(ar, SIZE, 0, 999);
		if(time_bubble < 60){
                	std::chrono::time_point<std::chrono::high_resolution_clock> start;
                	std::chrono::duration<double> diff;
                	std::chrono::time_point<std::chrono::high_resolution_clock> end;
                	start = std::chrono::high_resolution_clock::now();

                	bubbleSort(ar, SIZE);

                	end = std::chrono::high_resolution_clock::now();
                	diff = end - start;
                	std::cout << diff.count() << '\t';
			time_bubble = diff.count();
		}
		else if(time_bubble >= 60){
			std::cout << '\t';
		}

                //insertionSort
		randomFill(ar, SIZE, 0, 999);
		if(time_insertion < 60){
                        std::chrono::time_point<std::chrono::high_resolution_clock> start;
                        std::chrono::duration<double> diff;
                        std::chrono::time_point<std::chrono::high_resolution_clock> end;
                        start = std::chrono::high_resolution_clock::now();

                        insertionSort(ar, SIZE);

                        end = std::chrono::high_resolution_clock::now();
                        diff = end - start;
                        std::cout << diff.count() << '\t';
                        time_insertion = diff.count();
                }
                else if(time_insertion >= 60){
			std::cout << '\t';
                }

                //selectionSort
		randomFill(ar, SIZE, 0, 999);
                if(time_selection < 60){
                        std::chrono::time_point<std::chrono::high_resolution_clock> start;
                        std::chrono::duration<double> diff;
                        std::chrono::time_point<std::chrono::high_resolution_clock> end;
                        start = std::chrono::high_resolution_clock::now();

                        selectionSort(ar, SIZE);

                        end = std::chrono::high_resolution_clock::now();
                        diff = end - start;
                        std::cout << diff.count() << '\t';
                        time_selection = diff.count();
                }
                else if(time_selection >= 60){
                        std::cout << '\t';
                }


                //quickSort
		randomFill(ar, SIZE, 0, 999);
                if(time_quick < 60){
                        std::chrono::time_point<std::chrono::high_resolution_clock> start;
                        std::chrono::duration<double> diff;
                        std::chrono::time_point<std::chrono::high_resolution_clock> end;
                        start = std::chrono::high_resolution_clock::now();

                        quickSort(ar, SIZE);

                        end = std::chrono::high_resolution_clock::now();
                        diff = end - start;
                        std::cout << diff.count() << '\t';
                        time_quick = diff.count();
                }
                else if(time_quick >= 60){
                        std::cout << '\t';
                }
		

                //mergeSort
		randomFill(ar, SIZE, 0, 999);
                if(time_merge < 60){
                        std::chrono::time_point<std::chrono::high_resolution_clock> start;
                        std::chrono::duration<double> diff;
                        std::chrono::time_point<std::chrono::high_resolution_clock> end;
                        start = std::chrono::high_resolution_clock::now();

                        mergeSort(ar, SIZE);

                        end = std::chrono::high_resolution_clock::now();
                        diff = end - start;
                        std::cout << diff.count() << '\t';
                        time_merge = diff.count();
                }
                else if(time_merge >= 60){
                        std::cout << '\t';
                }


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
