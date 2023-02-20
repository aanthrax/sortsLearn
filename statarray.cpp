#include "statarray.hpp"

это неправильная функция... надо исправить... аналогично и функция для getMin
int getMax(const int *ar, int size){
        static int left = 0;
        static int right = size - 1;

        if(right == left){
                std::cout << "max = " << ar[left] << std::endl;
		left = 0;
		right = size - 1;

                return 0;
        }

        if(ar[left] <= ar[right]){
                left++;
        }

        else if(ar[left] > ar[right]){
                right--;
        }

        getMax(ar, size);

        return 0;
}


int getMin(const int *ar, int size){
        static int left = 0;
        static int right = size -1;

        if(right == left){
                std::cout << "min = " << ar[left] << std::endl;
                left = 0;
		right = size - 1;

		return 0;
        }
        if(ar[left] <= ar[right]){
                right--;
        }

        else if(ar[left] > ar[right]){
                left++;
        }

        getMin(ar,size);

        return 0;
}


int binSearch(int* ar, int size, int el) {
	if (ar[size >> 1] == el) {
		return (size >> 1);
	}
	if (size == 1) {
		return -1;
	}

	if (el > ar[size >> 1]) {
		return binSearch(&ar[size >> 1], size - (size >> 1), el) + (size >> 1); 
	}

	if (el < ar[size >> 1]) {
		return binSearch(ar, size >> 1, el);
	}


	return -1;
}

void test_Ar(int *ar, int size){
	int count = 0;

	for(int i = 0; i < size; i++){
		if(ar[i] <= ar[i+1]){
			count++;
		}

		if(ar[i] >= ar[i+1]){
			count--;
		}
	}

	if(count == size){
		std::cout << "1" << std::endl;	вывод на экран никому не интересен потому что твоя программа должна работать в автономном режиме... если же ты это выводишь на экран то, что должен делать компьютер???? как он должен работать с этой функцией? или ты посадишь китайца который будет выполнять роль биоробота???
	}

	else if(count == -size){
		std::cout << "2" << std::endl;
	}

	else if (count != size || count != -size){
		std::cout << "0" << std::endl;
	}
}

