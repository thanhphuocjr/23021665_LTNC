#include <stdio.h>
int abs(int c){
    if(c>0) return c;
    return -c;
}
void update(int *a,int *b) {
    int c=*a+*b;
    int d=abs(*a-*b);
    *a=c;
    *b=d;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
