/*Given a number N, Print first N prime number starting from 2 and skipping every
alternate prime number

Example Input:
5

Example Output:
2 5 11 17 23

Explanation :
▪ First few prime numbers are 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31 …
▪ First five alternate prime numbers will be 2, 5, 11, 17, and 23
*/

#include <stdio.h>
#include <math.h>

int main(){
    int x;
    printf("Enter the number of alternate prime numbers: ");
    scanf("%d", &x);
    long n=1000;
    int isprime[n+1];
    isprime[0]=0;
    isprime[1]=0;
    for(long i=2;i<n+1;i++){
        isprime[i]=1;
    }
    for(long i=2;i<=sqrt(n);i++){
        if(isprime[i]){
            for(long j=2*i;j<=n;j+=i){
                isprime[j]=0;
            }
        }
    }
    int count=0,count2=0;
    for(long i=2;i<=n;i++){
        if(count2==x){
            break;
        }
        if(isprime[i] && n%2==0){
            count+=1;
            if(count%2!=0){
                count2++;
                printf("%ld\n", i);
            }
        }
    }
    return 0;
}
