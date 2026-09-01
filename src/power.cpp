int naivePower(int x, int n) {
    if (x == 0) {
        return 0;
    }
    else if (n == 0) {
        return 1;
    }
    else {
        return x * naivePower(x, --n);
    }
}

int unoptimizedDCPower(int x, int n) {
    if (x == 0) {
        return 0;
    }
    else if (n == 0) {
        return 1;
    }
    else if (n % 2 == 0) {
        return unoptimizedDCPower(x, n / 2) * unoptimizedDCPower(x, n / 2);
    }
    else {
        return x * unoptimizedDCPower(x, n / 2) * unoptimizedDCPower(x, n / 2);
    }
}

int optimizedDCPower(int x, int n) {
    if (x == 0) {
        return 0;
    }
    else if (n == 0) {
        return 1;
    }

    int temp = optimizedDCPower(x, n / 2);
     
    if (n % 2 == 0) {
        return temp * temp;
    }
    else {
        return x * temp * temp;
    }
}
