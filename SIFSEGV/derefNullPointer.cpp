// Dereferencing null pointer

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    a=5;
    int *pi;
    pi=&a;
    int b=*pi;
    pi = NULL;
    int c=*pi;
}