#include <iostream>
using namespace std;

int compare_increasing(int a, int b) {
  if (a > b)
    return 1;
  else
    return -1;
}

int compare_decreasing(int a, int b) {
  if (a < b)
    return 1;
  else
    return -1;
}

void bubble_sort(int *arr, int n, int (*compare)(int, int)) {
  int i, j, tmp;

  for (i = 0; i < n; i++) {
    for (j = 0; j < n - 1; j++) {
      if (compare(arr[j], arr[j + 1]) > 0) {
        tmp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tmp;
      }
    }
  }
}

int main(int argc, char **argv) {
  cout << "Hello World" << endl;

  int arr[] = {3, 4, 1, 5, 8};

  bubble_sort(arr, 5, compare_decreasing);

  for (int i = 0; i < 5; i++) {
    std::cout << arr[i] << " ";
  }

  return 0;
}
