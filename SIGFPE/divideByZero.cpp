// Error obtained storing value which is not defined or done using divide by zero 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a=0;
    int b=15/a;
    int c=20/a;     // error in this line is not detected
}