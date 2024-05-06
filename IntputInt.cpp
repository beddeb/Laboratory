#include <iostream>

int inpint(int *integer) {
    bool flag = false;
    bool retcore = true;
    int minusflag = 0;
    char c;
    *integer = 0;
    while (c = getchar()) {
        if (c == ' ' || c == EOF || c == '\n') {

            if (flag) {
                if (minusflag % 2 != 0)
                    *integer = *integer * (-1);
                return retcore;
            }
            minusflag = 0;
        } else {
            if (c == '-') {
                minusflag++;
                if (minusflag == 2)
                    retcore = false;
            }
            if ((int) c >= '0' && (int) c <= '9') {
                flag = true;
                (*integer) *= 10;
                (*integer) += (int) c - 48;
            } else {
                if (c != '-')
                    retcore = false;
            }
            if (*integer > INT_MAX)
                retcore = false;
        }
    }
    return -1;
}