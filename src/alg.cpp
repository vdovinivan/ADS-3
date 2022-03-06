// Copyright 2021 NNTU-CS
int cbinsearch(int *arr, int size, int value) {
  int m = 0;
  for (int j = 0; j <= size; j++) {
        if (*(arr + j) == value)
        m += 1;
    }
  return m;
  return 0;
}
