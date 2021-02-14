// C++ code

#include <iostream>
using namespace std;

int Partition(int *arr, int front, int end){
    int pivot = arr[end];
    int i = front -1;
    for (int j = front; j < end; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    i++;
    swap(&arr[i], &arr[end]);
    return i;
}
void QuickSort(int *arr, int front, int end){
    if (front < end) {
        int pivot = Partition(arr, front, end);
        QuickSort(arr, front, pivot - 1);
        QuickSort(arr, pivot + 1, end);
    }
}

int main() {

    int n = 9;
    int array[] = {9, 4, 1, 6, 7, 3, 8, 2, 5};
    cout << "before sort"<<endl;
    for(int i; i<10;i++){
    	cout<<"array[i]";
	}
	cout<<endl;
    QuickSort(arr, 0, n-1);

    cout << "after sort"<<endl;
    for(int i;i<10;i++){
    	cout<<array[i];
	}
    return 0;
}
