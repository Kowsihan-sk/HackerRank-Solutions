#include <stdio.h>
#include <iostream>

using namespace std;

void update(int *a,int *b) {
    int m=*a,n=*b;
    *a=m + n;
    if(m>n)
    *b=m-n;
    else
    *b=n-m;    


}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
