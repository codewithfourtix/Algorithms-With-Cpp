#include <iostream>
using namespace std;

int main() {
	const int size = 5;
    int arr[size]  = { 3,2,7,5,1};
    //bubble sort 
    for(int i = 0 ; i < size-1 ; i++){
    	for(int j = 0; j < size-i-1; j++){
    		if(arr[j] > arr[j+1]){
    			int temp = arr[j+1];
    			arr[j+1] = arr[j];
    			arr[j] = temp;
			}
		}
	}
	for(int i = 0; i<size ; i++){
		cout << arr[i] << " " ;
	};
	//Selection sort
	int smallestIdx;
	for(int i = 0; i < size-1 ; i++){
		smallestIdx = i;
		for(int j = i+1 ; j<size ; j++){
			if(arr[j] < arr[smallestIdx]){
				smallestIdx = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[smallestIdx];
		arr[smallestIdx ] = temp;
		
	}
	cout << "\n Selection sort";
	for(int i = 0; i<size ; i++){
		cout << arr[i] << " " ;
	};
	
	//insertion sort 
	
	for(int i = 1 ; i < size ; i++){
		int current = arr[i];
		int prev = i-1;
		while(prev >= 0 && arr[prev] > current ){
			arr[prev + 1 ] = arr[prev];
			prev--;
			
		}
		
		arr[prev+1] = current ;
		
		
		
	}
	cout << "\n Insertion sort";
	for(int i = 0; i<size ; i++){
		cout << arr[i] << " " ;
	};
    return 0;
}

