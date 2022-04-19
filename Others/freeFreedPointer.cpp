#include <bits/stdc++.h>
using namespace std;

int main() {
    int *a = (int*) malloc(4);
    free(a);
    free(a);
}