#include<iostream> 
using namespace std;

//function 
void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
cout << arr[i]<<"";}
cout<< endl;
}
int main(){ 

int num[5]={1,3,3,4,5,};
int n = 5;
printArray(num, 5);

int net[5]={1,2,3,4,5};
printArray(net, 5);
}
