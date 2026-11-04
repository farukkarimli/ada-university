void bubble_sort(int a[], int n) {
for (int pass = 1; pass < n; pass++) {
for (int j = 0; j < n - pass; j++) {
if (a[j] > a[j + 1]) {
int temp = a[j];
a[j] = a[j + 1];
a[j + 1] = temp;
}
}
}
}