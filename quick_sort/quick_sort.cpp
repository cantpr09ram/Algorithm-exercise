#include <iostream>
using namespace std;


void QuickSort(int array[], int front, int end){
    if (front < end) {
        int pivot = array[end];
        int i = front -1;
        for (int j = front; j < end; j++) {
            if (array[j] < pivot) {
                i++;
                swap(array[i], array[j]);
            }
        }
        i++;
        swap(array[i],array[end]);
        QuickSort(array, front, pivot - 1);
        QuickSort(array, pivot + 1, end);
    }
}

int main() {

    int n = 10;
    int array[] = {0,9,8,7,6,5,4,3,2,1};
    cout << "before sort"<<endl;
    for(int i; i<10;i++){
    	cout<<array[i];
	}
	cout<<endl;
    QuickSort(array, 0, n-1);

    cout << "after sort"<<endl;
    for(int i = 0;i<10;i++){
    	cout<<array[i];
	}
    return 0;
}
