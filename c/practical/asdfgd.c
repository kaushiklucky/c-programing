#include <stdio.h>

int compareArrays(int *arr1, int *arr2, int n) {
  int i;
  for (i = 0; i < n; i++) {
    if (arr1[i] != arr2[i]) {
      return 0;
    }
  }
  return 1;
}

int main() {
  int n, i;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  int arr1[n], arr2[n];
  printf("Enter the elements of first array: ");
  for (i = 0; i < n; i++) {
    scanf("%d", &arr1[i]);
  }
  printf("Enter the elements of second array: ");
  for (i = 0; i < n; i++) {
    scanf("%d", &arr2[i]);
  }
  int result = compareArrays(arr1, arr2, n);
  if (result == 1) {
    printf("The arrays are identical.\n");
  } else {
    printf("The arrays are not identical.\n");
  }
  return 0;
}



