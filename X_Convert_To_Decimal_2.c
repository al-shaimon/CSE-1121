#include <stdio.h>

// function to count number of ones in binary representation of n
int countOnes(int n) {
    int count = 0;
    while (n) {
        if (n & 1) {
            count++;
        }
        n >>= 1;
    }
    return count;
}

// function to convert a binary number with 'numOnes' ones to decimal
int binaryToDecimal(int numOnes) {
    int decimal = 0;
    int powerOfTwo = 1;
    while (numOnes) {
        decimal += powerOfTwo;
        powerOfTwo <<= 1;
        numOnes--;
    }
    return decimal;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int numOnes = countOnes(n);
        int decimal = binaryToDecimal(numOnes);
        printf("%d\n", decimal);
    }
    return 0;
}
