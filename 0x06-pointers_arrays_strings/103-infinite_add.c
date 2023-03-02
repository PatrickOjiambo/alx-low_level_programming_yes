/**
 *infinite_add - Infinite add
 *@n1: nnn
 *@n2: jsjs
 *@r: param r
 *@size_r: Param 0
 *return: void
 */
#include "main.h"
#include<stdio.h>
char *infinite_add(char *n1, char *n2, char *r, int size_r) {
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int i = len1 - 1;
    int j = len2 - 1;
    int k = 0;
    int carry = 0;
    while (i >= 0 || j >= 0) {
        int digit1 = i >= 0 ? n1[i] - '0' : 0;
        int digit2 = j >= 0 ? n2[j] - '0' : 0;
        int sum = digit1 + digit2 + carry;
        if (sum > 9) {
            carry = 1;
            sum -= 10;
        } else {
            carry = 0;
        }
        if (k >= size_r - 1) {
            return 0;
        }
        r[k++] = sum + '0';
        i--;
        j--;
    }
    if (carry > 0) {
        if (k >= size_r - 1) {
            return 0;
        }
        r[k++] = carry + '0';
    }
    r[k] = '\0';
    for (int m = 0; m < k / 2; m++) {
        char temp = r[m];
        r[m] = r[k - 1 - m];
        r[k - 1 - m] = temp;
    }
    return r;
}

