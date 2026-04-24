#include<iostream>
#include<vector>
using namespace std;

// bool isSort(int num[], int size){

//     if(size == 1 or size == 0){     
//         return true;
//     }
//     if(num[0] < num[1] and isSort(num + 1, size - 1)){ 
//         return true;
//     }
//     return false;
// }

bool isSort(int num[], int size, int i) {
    if(i == size - 1) {
        return true;
    }
    if(num[i] > num[i+1]) {
        return false;
    }
    return isSort(num, size, i+1);
}

int main(){
int num[] = {1,2,3,4,0};
int i= 0;
cout<< boolalpha << isSort(num, 5, 0);
return 0;
}

//correct code

