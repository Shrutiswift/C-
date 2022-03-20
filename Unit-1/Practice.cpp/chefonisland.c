#include<stdio.h>
int main() {
    int t;
    int X, Y, T, S, D;
    int P, Q, min;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        scanf("%d %d %d %d %d",&X, &Y, &T, &S, &D);
        P = X/T;
        Q = Y/S;
        if(P>Q) {
            min = Q;
        }
        else {
            min = P;
        }
        if(min >= D) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
        return 0;
    
}