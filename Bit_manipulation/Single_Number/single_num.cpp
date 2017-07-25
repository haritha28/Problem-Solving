#include<iostream>
using namespace std;

int main () {

	int arr[] = {1,2,2,3,1};
	int result = 0;
	int size = sizeof(arr)/sizeof(arr[0]);

	for (int i = 0; i < size; i++) {
		result = result ^ arr[i];
	}

	cout<<result;
}
