#include<stdio.h> 
int main() {
    int t;
    int R, W, C;
    int R2, W2, C2;
    scanf("%d", &t);
    while(t--) {
        int a = 0, b = 0;
        scanf("%d %d %d",&R, &W, &C);
        scanf("%d %d %d",&R2, &W2, &C2);
        if(R > R2) {
            a ++;
        }
        else {
            b ++;
        }
        if(W > W2) {
            a ++;
        }
        else {
            b ++;
        }
        if(C > C2) {
            a ++;
        }
        else {
            b ++;
        }
        if(a > b) {
            printf("A\n");
        }
        else {
            printf("B\n");
        }
    }
    return 0;
} 


