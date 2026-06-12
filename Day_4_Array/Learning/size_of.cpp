#include <iostream>
using namespace std;

int main() {
    int arr[] = {0,10,20,30,40,50,60,70,80,90};
    int size_total=sizeof(arr);
    int size_index=sizeof(arr[0]);
    int size = size_total/size_index;
    cout<<"Total index: "<<size;
    
    cout << "You entered:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
	
    return 0;
}
