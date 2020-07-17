#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function  
    int c,d;  
    c=*a + *b; 
    if(*a>*b)
    {
    d=*a-*b;
    printf("%d\n%d",c,d);
    }
    else
    {
    d=*b-*a;
    printf("%d\n%d",c,d);
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    

    return 0;
}


