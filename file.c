#include <stdio.h>

void prntarr(int* arr, int size){
  for(int i = 0; i < size; i++) printf("%d ", arr[i]);
  printf("\n");
}

int main(){
  int size;
  printf("enter the number of elements : ");
  scanf("%d", &size);
  
  int arr[size];
  for(int i = 0; i < size; i++){
    printf("enter the element N %d ", i);
    scanf("%d", &arr[i]);
  }
  printf("before sorting\n");
  prntarr(arr, size);
  
  for(int i = 0; i < size-1; i++){
    int idx = i;
    //for debbugging
    //printf("i:%d, idx:%d\n", i, idx);
    for(int j = i+1; j < size; j++){
      if(arr[j] < arr[idx]) idx = j;
    }
    if(i != idx){
      int tmp = arr[i];
      arr[i] = arr[idx];
      arr[idx] = tmp;
    }
    //for debbugging
    //printf("i:%d, idx:%d\n", i, idx);
    //prntarr(arr, size);
  }
  
  printf("after sorting\n");
  prntarr(arr, size);
}
