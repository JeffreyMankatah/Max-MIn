#include <iostream>
using namespace std;

void findMinMax(int a[],int start,int end,int *max, int *min){
	int max1,min1,max2,min2;
	if(start == end){
		*max = a[start];
		*min = a[start];
	}
	else if((start + 1) == end){
		if(a[start] < a[end]){
			*max = a[end];
			*min = a[start];
		}
		else{
			*max = a[start];
			*min = a[end];
		}
	}
	else{
		int mid = start + (end - start)/2;
		findMinMax(a, start, mid,&max1,&min1);
		findMinMax(a, mid+1, end,&max2,&min2);
		if(max1 > max2){
			*max = max1;

		}
		else{
			*max = max2;
		}
		if(min1 < min2){
			*min = min1;
		}
		else{
			*min = min2;
		}
	}

}


int main(){

	cout << "Enter the size of array: ";
	int size;
	cin >> size;
	int array[size];
	int max = 0, min = 0;
    cout << "Enter element \n";
	for(int j=0; j<size; j++){

		cin >> array[j];
	}

	int start = 0, end = size - 1;

	findMinMax(array, start, end, &max, &min);

	cout << "the max element = " << max << "\n";
	cout << "the min element = " << min << "\n";

	return 0;
}
