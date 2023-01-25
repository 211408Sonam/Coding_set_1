...
Problem:

Given an array of integers and a number k, where 1 <= k <= length of the array, compute the maximum values of each subarray of length k

...

void Disp(int arr[], int n, int k) {
  int j, max;
  for (int i = 0; i <= n - k; i++) {
    max = arr[i];
    for (j = 1; j < k; j++) {
      if (arr[i + j] > max)
        max = arr[i + j];

    }
    printf("%d ", max);

  }
}

int main() {
  int arr[] = {4, 6, 8, 3, 9};
  int n = sizeof(arr) / sizeof(int);
  int k = 3;

  Disp(arr, n, k);
  return 0;
}
