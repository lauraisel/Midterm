#include <iostream>
#include <ctime>
#include <vector>
#include <chrono>
using namespace std;

int genNo(int min, int max)
{

	return rand() % (max - min + 1) + min;
}

int* prepare() {
	int* arr[10000];
	for (int i = 0; i < 10000; ++i) {
		*arr[i] = genNo(1, 5);
	}
	return *arr;
}



int main() {

	auto start = chrono::high_resolution_clock::now();
	int* arr = prepare();
	double avg = average(arr, n);

	




	auto end = chrono::high_resolution_clock::now();
	
	delete[] arr;
	double duration =chrono::duration_cast<chrono::nanoseconds>( end- start).count();
	cout << duration << " ns" << endl;
	return 0;
}