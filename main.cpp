#include "sorts.hpp"
#include "arraywork.hpp"
#include <chrono>



int time_test_task1(){
	int time_bubble = 0;
	int time_insertion = 0;
	int time_selection = 0;
	int time_quick = 0;
	int time_merge = 0;
	int time_count = 0;
	
        std::cout << "size\tbuble sort\tinsertion sort\tselection sort\tquick sort\tmerge sort\tcount sort"  << std::endl;
	
	auto getCurStep = [](int size){
                if(size >= 500 && size < 1000){
                         return  250;
                }
                else  if(size >= 1000 && size < 10000){
                         return 1000;
                }
                else  if(size >= 10000 && size < 100000){
                         return  5000;
                }
                else if(size >= 100000 && size < 200000){
                         return 10000;
                }
                else  if(size >= 200000 && size < 1000000){
                         return 100000;
                }
                else  if(size >= 1000000 && size < 10000000){
                         return 1000000;
               }

	       return 100;
	};

	for(int size = 100; size <= 10000000; size += getCurStep(size)){
                int* ar =  new int [size];
                std::cout << size << "\t";

                //bubbleSort
		randomFill(ar, size, 0, 999);
		if(time_bubble < 60){
                	std::chrono::time_point<std::chrono::high_resolution_clock> start;
                	std::chrono::duration<double> diff;
                	std::chrono::time_point<std::chrono::high_resolution_clock> end;
                	start = std::chrono::high_resolution_clock::now();

                	bubbleSort(ar, size);

                	end = std::chrono::high_resolution_clock::now();
                	diff = end - start;
                	std::cout << diff.count() << "\t";
			time_bubble = diff.count();
		}
		else if(time_bubble >= 60){
			std::cout << "\t";
		}

                //insertionSort
		randomFill(ar, size, 0, 999);
		if(time_insertion < 60){
                        std::chrono::time_point<std::chrono::high_resolution_clock> start;
                        std::chrono::duration<double> diff;
                        std::chrono::time_point<std::chrono::high_resolution_clock> end;
                        start = std::chrono::high_resolution_clock::now();

                        insertionSort(ar, size);

                        end = std::chrono::high_resolution_clock::now();
                        diff = end - start;
                        std::cout << diff.count() << "\t";
                        time_insertion = diff.count();
                }
                else if(time_insertion >= 60){
			std::cout << "\t";
                }

                //selectionSort
		randomFill(ar, size, 0, 999);
                if(time_selection < 60){
                        std::chrono::time_point<std::chrono::high_resolution_clock> start;
                        std::chrono::duration<double> diff;
                        std::chrono::time_point<std::chrono::high_resolution_clock> end;
                        start = std::chrono::high_resolution_clock::now();

                        selectionSort(ar, size);

                        end = std::chrono::high_resolution_clock::now();
                        diff = end - start;
                        std::cout << diff.count() << "\t";
                        time_selection = diff.count();
                }
                else if(time_selection >= 60){
                        std::cout << "\t";
                }


                //quickSort
		randomFill(ar, size, 0, 999);
                if(time_quick < 60){
                        std::chrono::time_point<std::chrono::high_resolution_clock> start;
                        std::chrono::duration<double> diff;
                        std::chrono::time_point<std::chrono::high_resolution_clock> end;
                        start = std::chrono::high_resolution_clock::now();

                        quickSort_up(ar, size);

                        end = std::chrono::high_resolution_clock::now();
                        diff = end - start;
                        std::cout << diff.count() << "\t";
                        time_quick = diff.count();
                }
                else if(time_quick >= 60){
                        std::cout << "\t";
                }
		

                //mergeSort
		randomFill(ar, size, 0, 999);
                if(time_merge < 60){
                        std::chrono::time_point<std::chrono::high_resolution_clock> start;
                        std::chrono::duration<double> diff;
                        std::chrono::time_point<std::chrono::high_resolution_clock> end;
                        start = std::chrono::high_resolution_clock::now();

                        mergeSort_up(ar, size);

                        end = std::chrono::high_resolution_clock::now();
                        diff = end - start;
                        std::cout << diff.count() << "\t";
                        time_merge = diff.count();
                }
                else if(time_merge >= 60){
                        std::cout << "\t";
                }

		//countSort
                randomFill(ar, size, 0, 999);
                if(time_count < 60){
                        std::chrono::time_point<std::chrono::high_resolution_clock> start;
                        std::chrono::duration<double> diff;
                        std::chrono::time_point<std::chrono::high_resolution_clock> end;
                        start = std::chrono::high_resolution_clock::now();

                        countSort(ar, size);

                        end = std::chrono::high_resolution_clock::now();
                        diff = end - start;
                        std::cout << diff.count() << "\t";
                        time_count = diff.count();
                }
                else if(time_count >= 60){
                        std::cout << "\t";
                }


                std::cout<<std::endl;
                delete[] ar;
	}

	return 0;
}


int time_test_task2_quickSort(){
	int ar[1000000];
	random(ar, 1000000);
	
	std::chrono::time_point<std::chrono::high_resolution_clock> start;
        std::chrono::duration<double> diff;
        std::chrono::time_point<std::chrono::high_resolution_clock> end;
        start = std::chrono::high_resolution_clock::now();
        quickSort_up(ar, 1000000);
        end = std::chrono::high_resolution_clock::now();
        diff = end - start;
        std::cout << "time of sorting unsorted array with quick sort ascending: " << diff.count() << std::endl;

	start = std::chrono::high_resolution_clock::now();
	quickSort_up(ar, 1000000);
	end = std::chrono::high_resolution_clock::now();
	diff = end - start;
	std::cout << "time of sorting sorted array with quick sort ascending: " << diff.count() << std::endl;

	start = std::chrono::high_resolution_clock::now();
	quickSort_down(ar, 1000000);
	end = std::chrono::high_resolution_clock::now();
	diff = end - start;
	std::cout << "time of sorting array with quick sort descending: " << diff.count() << std::endl;

	return 0;
	
}



int time_test_task2_mergeSort(){
	int ar[1000000];
	random(ar, 1000000);
	
	std::chrono::time_point<std::chrono::high_resolution_clock> start;
        std::chrono::duration<double> diff;
        std::chrono::time_point<std::chrono::high_resolution_clock> end;
        start = std::chrono::high_resolution_clock::now();
        mergeSort_up(ar, 1000000);
        end = std::chrono::high_resolution_clock::now();
        diff = end - start;
        std::cout << "time of sorting unsorted array with merge sort ascending: " << diff.count() << std::endl;

        start = std::chrono::high_resolution_clock::now();
        mergeSort_up(ar, 1000000);
        end = std::chrono::high_resolution_clock::now();
        diff = end - start;
        std::cout << "time of sorting sorted array with merge sort ascending: " << diff.count() << std::endl;

        start = std::chrono::high_resolution_clock::now();
        mergeSort_down(ar, 1000000);
        end = std::chrono::high_resolution_clock::now();
        diff = end - start;
        std::cout << "time of sorting array with merge sort descending: " << diff.count() << std::endl;

	return 0;
}


int main(){

	time_test_task1();
//	time_test_task2_quickSort();
//	time_test_task2_mergeSort();
	
	return 0;
}
