#include<stdio.h>
int main() {
    int t;
    int A, B, C, D;
    scanf("%d", &t);
    while(t--){
    scanf("%d %d %d %d", &A, &B, &C, &D);
    if (A + C == 180) {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    }
}