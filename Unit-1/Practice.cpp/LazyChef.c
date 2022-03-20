#include<stdio.h>
int main() {
    int t;
    int x, m, d;
    int sum, multi, min;
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d %d", &x, &m, &d);
        multi= x * m;
        sum = x + d;
        if (multi >= sum) {
            min = sum;
        }
        else {
            min = multi;
        }
    printf("%d", min);
    }
    return 0;
}