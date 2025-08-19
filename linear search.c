#include <stdio.h>
int linear_Search(int arr[], int size, int key) {
for (int i = 0; i < size; i++) {
if(arr[i] == key)
return i; // Return index
}
return -1;
}
int main () {
int arr[100], n, key;
printf("Enter number of elements: ");
scanf("%d", &n);
printf("Enter %d elements:\n", n);
for (int i = 0; i < n; i++)
scanf("%d", &arr[i]);
printf("Enter element to search: ");
scanf("%d", &key);
int result = linear_Search(arr, n, key);
if (result != -1)
printf("Element found at index %d\n", result);
else
printf("Element not found\n");
return 0;
}