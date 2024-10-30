#include<iostream>
#include<string>

using namespace std;

bool linearSearchAux(int target, vector<int>& arr, int currPosition, int size) {
    if(currPosition == size)
        return false;
    if(arr[currPosition] == target)
        return true;
    
    return linearSearchAux(target, arr, currPosition + 1, size);
    
    
}

bool linearSearch(int target, vector<int>& arr) {
    return linearSearchAux(target, arr, 0, arr.size());
}





// Start and end represent the range of valid position
bool binarySearchAux(int target, vector<int>& arr, int start, int end) {
    if(start > end) {
        return false;
    }
    int mid = (start + end) / 2;
    if(arr[mid] == target) 
        return true;
    else if(arr[mid] < target) {
        return binarySearchAux(target, arr, mid + 1, end);
    }
    return binarySearchAux(target, arr, start, mid - 1);
}

bool binarySearch(int target, vector<int>& arr) {
    return binarySearchAux(target, arr, 0, arr.size());
}


int main() {
    vector<int> values({1, 3, 4, 10, 24, 27, 29, 33, 49, 51, 67, 89, 100});

    cout << boolalpha;
    cout << "Using linear search\n";
    cout << "Is 29 in the array? (LS) " << linearSearch(29, values) << endl;
    cout << "Is 100 in the array? (LS) " << linearSearch(100, values) << endl;
    cout << "Is 1 in the array? (LS) " << linearSearch(1, values) << endl;
    cout << "Is 129 in the array? (LS) " << linearSearch(129, values) << endl;

    cout << "\nUsing binary search \n";
    cout << "Is 29 in the array? (BS) " << binarySearch(29, values) << endl;
    cout << "Is 100 in the array? (BS) " << binarySearch(100, values) << endl;
    cout << "Is 1 in the array? (BS) " << binarySearch(1, values) << endl;
    cout << "Is 129 in the array? (BS) " << binarySearch(129, values) << endl;
}