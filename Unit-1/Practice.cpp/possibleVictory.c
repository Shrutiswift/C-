#include<stdio.h>
int main() {
    int R, O, C, t, m, s;
    scanf("%d %d %d", &R, &O, &C);
    t = 20-O;
    m = t*36;
    s = m + C;
    if(s > R){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}