// Stackoverflow error not detected

#include <bits/stdc++.h>
using namespace std;
  
void infiniteRecur(int a) {
    return infiniteRecur(a);
}

int main() {
    // Infinite Recursion
    infiniteRecur(5);
}