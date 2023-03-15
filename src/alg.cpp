// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int count = 0;
  int l = 0;
  int r = size - 1;
  while (l <= r) {
    int m = (l + r) / 2;
    if (arr[m] < value) {
      l = m + 1;
    } else if (arr[m] > value) {
      r = m - 1;
    } else {
      count++;
      int mid = m - 1;
      while (mid >= l && arr[mid] == value) {
        count++;
        mid--;
      }
      mid = m + 1;
      while (mid <= r && arr[mid] == value) {
        count++;
        mid++;
      }
      break;
    }
  }
  return count;
}
