/*Given a sorted array. Write functions using binary search to calculate following things:

. lower_bound(x) : index of first element which is greater or equal to x in the given array
. upper_bound(x): index of first element which is greater than x in the given array
. is_present(x): return true if x is present in the array else return false
*/

/*
For example: 
Input:------------------------ 
arr = {1, 2, 4, 4, 5, 6}
key = 4

Output:--------------------------
lowerbound = 2
upperbound = 4
ispresent = True


*/

#include <stdio.h>

int lower_bound(int a[], int n, int x) {
    int l = 0, r = n - 1;
    while (l < r) {
        int mid = l + (r - l) / 2;
        if (a[mid] < x)
            l = mid + 1;
        else
            r = mid;
    }
    return (a[l] >= x) ? l : -1;
}

int upper_bound(int a[], int n, int x) {
    int l = 0, r = n - 1;
    while (l < r) {
        int mid = l + (r - l) / 2;
        if (a[mid] <= x)
            l = mid + 1;
        else
            r = mid;
    }
    return (a[l] > x) ? l : -1;
}

int is_present(int a[], int n, int x) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (a[mid] == x)
            return 1;
        if (a[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return 0;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int x;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Lower Bound: %d\n", lower_bound(a, n, x));
    printf("Upper Bound: %d\n", upper_bound(a, n, x));
    printf("Is Present: %d\n", is_present(a, n, x));
    return 0;
}
