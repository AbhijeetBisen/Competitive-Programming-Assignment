/*Given two sorted arrays, merge them to get another sorted array

Example Input:
5                #size of first array
2 4 11 17 91     #first array

4                #size of second array
3 7 9 100        #second array

Example Output :
2 3 4 7 9 11 17 91 100
*/

#include <stdio.h>

int main() {
    int x,y,z;
    int a[10000], b[10000], c[20000];
    printf("Enter the size of 1st array: ");
    scanf("%d",&x);
    printf("Enter the array elements: ");
    for(int i = 0; i < x; i++)      
       scanf("%d", &a[i]);
    printf("Enter the size of 2nd array: ");
        scanf("%d",&y);
    printf("Enter the array elements: ");
    for(int i = 0; i < y; i++)      
       scanf("%d", &b[i]);
    z = x + y;
    for(int i = 0; i < x; i++)
       c[i] = a[i];
    for(int i = 0; i < y; i++)     
        c[i + x] = b[i];
    printf("Merge array: ");
    for(int i = 0; i < z; i++)
        printf("%d ", c[i]);
    printf("\nSorted Merge Array: ");
    for(int i = 0; i < z; i++){
        int temp;
        for(int j = i + 1; j < z; j++) {
            if(c[i] > c[j]) {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
        printf(" %d ",c[i]); // print each element after sorting
    }
    return 0;   
}
