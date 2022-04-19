// Dereferencing null pointer

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    a=5;
    int *pi;
    pi=&a;
    pi = NULL;
    int c=*pi;
}