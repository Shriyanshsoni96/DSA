// num_pattern.cpp
#include<iostream>
using namespace std;
int main() {
int n;
cin>>n;

int mid = (n+1)/2;

for(int i =1 ; i <= mid ; i++){

    for(int j =1 ; j<= mid -i; j++){
        cout<<"    ";
    }

    for(int j  = i; j >= 1; j-- ){
        cout<<j<<" ";
    }

    for (int j =1 ;  j <= 2*i -3; j++){
        cout<<"  ";
    }

    if (i !=1){
        for(int j  = 1; j <= i; j++ ){
        cout<<j<<" ";
    }
    }
    cout<<endl;
}

}