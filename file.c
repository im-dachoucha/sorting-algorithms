#include <stdio.h>

void prntarr(int*, int);
void bubbleSort(int*, int);
int main(){
  int size;
  printf("enter the number of elements : ");
  scanf("%d", &size);

  int arr[size];
  for(int i = 0; i < size; i++){
    printf("enter the element N %d : ", i);
    scanf("%d", &arr[i]);
  }

  prntarr(arr, size);
  bubbleSort(arr, size);
  prntarr(arr, size);
}

void prntarr(int* arr, int size){
   for(int i = 0; i < size; i++) printf("%d ", arr[i]);
   printf("\n");
 }

 void bubbleSort(int* arr, int size){
  int tmp;
  for(int i = 0; i < size; i++){
    for(int j = 0; j < size-i-1; j++){
      if(*(arr+j) > *(arr+j+1)){
        tmp = *(arr+j);
        *(arr+j) = *(arr+j+1);
        *(arr+j+1) = tmp;
      }
  }
 }
}

