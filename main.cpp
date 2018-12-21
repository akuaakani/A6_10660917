#include <iostream>

void RexArray(int *array, int m) {
  for (int k = 0; k < m; ++k)
    std::cout << array[k] << " " << std::flush;
  std::cout << std::endl;
}

void BubbleSort(int *array, int m) {
  bool swapped = true;
  int j = 0;
  int temp;

  while (swapped) {
    swapped = false;
    j++;
    for (int k = 0; k < m - j; ++k) {
      if (array[k] > array[k + 1]) {
        temp = array[k];
        array[k] = array[k + 1];
        array[k + 1] = temp;
        swapped = true;
      }
    }
  }
}

int main() {
  int array[] = {94, 42, 50, 95, 333, 65, 54, 456, 1, 1234};
  int m = sizeof(array)/sizeof(array[0]);

  std::cout << "Before Bubble Sort :" << std::endl;
  RexArray(array, m);

  BubbleSort(array, m);

  std::cout << "After Bubble Sort :" << std::endl;
  RexArray(array, m);
  return (0);
}
