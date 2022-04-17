// Dereferencing freed memory

#include <bits/stdc++.h>
using namespace std;

int main() {
    int *a=(int *)malloc(4);
    int b=5;
    a = &b;
    free(a);
    int c=*a;
}