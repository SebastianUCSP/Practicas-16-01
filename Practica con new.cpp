#include <iostream>
using namespace std;

int *getPtrToFive(){
	int *x = new int;
	*x = 5;
	return x;
}

int main() {
	
	int numItems;
	cout << "how many items?";
	cin >> numItems;
	int *arr = new int[numItems];
	for(int i = 0; i < numItems; i++){
		cout << "enter item " << i << ": ";
		cin >> arr[i];
	}
	for(int i = 0; i < numItems; ++i){
		cout << arr[i] << endl;
	}
	delete [] arr;
	return 0;
}

