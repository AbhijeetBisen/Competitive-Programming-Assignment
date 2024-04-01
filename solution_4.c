/*Given three numbers a, b and m. Calculate (a(to the power b) % m)

Example input :
2 5 3

Example output :
2

Explanation :
25 % 3 = 32 % 3 = 2
*/

#include <stdio.h>
#include <math.h>

int main() {
    int x, y, z;
    printf("Enter three numbers x, y and z: ");
    scanf("%d %d %d", &x, &y, &z);
    int result = (int)pow(x, y) % z;
    printf("Result: %d\n", result);
    return 0;
}
