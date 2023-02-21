#include "arraywork.hpp"


void random(int *ar, int size){
        srand(time(nullptr));
        for (int i = 0; i < size; i++) {
                ar[i] = rand() % 100;
        }
}


void randomFill(int *ar, int size, int min, int max){
        srand(time(nullptr));
        for (int i = 0; i < size; i++){
                ar[i] = rand()%(max - min + 1) + min;
        }
}


void show(int *ar, int size){
        for(int i = 0; i < size; i++){

                std::cout << ar[i] << '\t';
        }
        std::cout << '\n';
}


int showEl(const int *ar, int size, int n, int m){
        static int index = 0;
        static int N = 0; //N - количество строк

        if(N >= m){
		index = 0;
		N = 0;

                return 0;
        }

        for(int M = 0;  M < m; M++){
                std::cout << ar[index] << "\t";
                index++;
        }

        N++;

        std::cout << "\n";

        showEl(ar, size, n, m);

        return 0;
}


void printBigAr(int *bigAr, int size){
	for(int i = 0; i < size; i++){
		std::cout << bigAr[i] << "\t";
        }
	std::cout << "\n";
}


void printSmallAr(int *smallAr){
	for(int i = 0; i < 100; i++){
		if(smallAr[i] <= 10){
			for(int k = 0; k < smallAr[i]; k ++){
				std::cout << i << " " << "\t";
			}
			std::cout << "\n";
		}
		else{
			for(int k = 0; k < 10; k ++){
				std::cout << i << " " << "\t";
			}
			std::cout << " - " << smallAr[i] - 10 << "\n";
		}

	}
}
