#include <stdio.h>

void read_array(int arr[],int size) {
    int i;
    for (i=0;i<size;i++) {
        printf("Enter element %d: ",i+ 1);
        scanf("%d",&arr[i]);
    }
}

int find_max(int arr[], int size) {
    int i, max = arr[0];
    for (i=1; i<size;i++) {
        if (arr[i]>max)
            max=arr[i];
    }
    return max;
}

int main() {
    int arr[100], n;

    printf("How many elements? ");
    scanf("%d", &n);

    read_array(arr, n);

    printf("Maximum = %d\n", find_max(arr, n));
    return 0;
}