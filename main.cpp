#include "sorts.hpp"
#include "arraywork.hpp"
#include "statarray.hpp"
#include "testsorts.hpp"

int main(){
	int ar[10];
	randomFill(ar, 10, -10000, 10000);
	selectionSort(ar, 10);
	std::cout << test_Ar(ar, 10) << std::endl;

	return 0;
}
