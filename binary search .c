#include <stdio.h>
int binary_Search(int arr[], int size, int key) {
int low = 0, high = size - 1;
while (low <= high) {
int mid = (low + high) / 2;
if(arr[mid] == key)
return mid;
else if (key < arr[mid])
high = mid - 1;
else
low = mid + 1;
}
return -1;
}
int main () {
int arr[100], n, key;
printf("Enter number of elements: ");
scanf("%d", &n);
printf("Enter %d sorted elements:\n", n);
for (int i = 0; i < n; i++)
scanf("%d", &arr[i]);
printf("Enter element to search: ");
scanf("%d", &key);
int result = binary_Search(arr, n, key);
if (result != -1)
printf("Element found at index %d\%d\n", result);
else
printf("Element not found\n");
return 0;
}
