// Not freeing memory on heap

#include <bits/stdc++.h>
using namespace std;

int main() {
    int *a=(int *)malloc(4);
    int b=5;
    a = &b;
}