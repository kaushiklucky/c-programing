/*Q27 Write a function(using pointer parameters) that compares two integer arrays toseewhether they are identical. 
The function returns 1 if they are identical else 0*/

#include <stdio.h>
int arrays_identical(int *arr1, int *arr2, int size1, int size2);
int main() {
int size1, size2;
printf("Enter the size of the first array: ");
scanf("%d", &size1);
int arr1[size1];
printf("Enter the elements of the first array: ");
for (int i = 0; i < size1; i++) {
scanf("%d", &arr1[i]);
}
printf("Enter the size of the second array: ");
scanf("%d", &size2);
int arr2[size2];
printf("Enter the elements of the second array: ");
for (int i = 0; i < size2; i++) {
scanf("%d", &arr2[i]);
}
if (arrays_identical(arr1, arr2, size1, size2)) {
printf("The arrays are identical.\n");
} else {
printf("The arrays are not identical.\n");
}
return 0;
}
int arrays_identical(int *arr1, int *arr2, int size1, int size2) {
if (size1 != size2) { // check if the arrays are of the same length
return 0;
}
for (int i = 0; i < size1; i++) { // iterate through each element of the arrays

if (*(arr1 + i) != *(arr2 + i)) { // compare the elements at the same index

return 0;
}
}
return 1;
}
