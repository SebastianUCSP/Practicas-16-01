#include <iostream>
using namespace std;

void swap(int *x,  int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

bool ascend(int i, int j){
	return i > j;
}

bool descend(int i, int j){
	return i < j;
}

void Bubblesort(int arr[], int len, bool (*fp)(int, int)){
	for(int i = 0; i < len; i++){
		for(int j = 0; j < len-1; j++){
			if((*fp)(arr[j], arr[j+1]))
				swap(arr[j], arr[j+1]);
		}
	}
}

int mult(int x, int y){
	return x*y;
}

void imprimirarreglo(int arr[], int len){
	for(int i = 0; i < len; i++)
		cout << arr[i] << " ";
    cout << endl;
}

int main() {
	/*
	int x = 5;
	int *ptr = &x;
	
	cout << ptr << endl;
	cout << *ptr << endl;
	
	int **ptrptr = &ptr;
	cout << ptrptr << endl;
	cout << *ptrptr << endl; //ptr
	
	int (*fptr)(int, int);
	fptr = mult;
	int z = (*fptr)(4, 5);
	cout << "z es: " << z << endl;
	x = (*fptr)(2, 6);
	cout << "x es:" << x << endl;
	*/
	
	bool(*asc)(int, int);
	bool(*des)(int, int);
	
	asc = ascend;
	des = descend;
	
	int arr[] = {54, 21, 6, 34, 8, 10};
		
	Bubblesort(arr, 6, asc);
	
	imprimirarreglo(arr, 6);
	
	cout << endl;
	
	Bubblesort(arr, 6, des);
	
	imprimirarreglo(arr, 6);
	
	
	return 0;
}

