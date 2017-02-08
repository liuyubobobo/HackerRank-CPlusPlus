#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    int a;
    long b;
    long long c;
    char d;
    float e;
    double f;

    char space;

    scanf("%d%c",&a,&space);
    scanf("%ld%c",&b,&space);
    scanf("%lld%c",&c,&space);
    scanf("%c%c",&d,&space);
    scanf("%f%c",&e,&space);
    scanf("%lf%c",&f,&space);

    printf("%d\n",a);
    printf("%ld\n",b);
    printf("%lld\n",c);
    printf("%c\n",d);
    printf("%.3f\n",e);
    printf("%.9f\n",f);

    return 0;
}