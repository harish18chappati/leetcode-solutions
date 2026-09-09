long long countCommas(long long n) {
    int count = 0;
    long long temp = n;

    while (temp > 0) {
        count++;
        temp /= 10;
    }

    if (count < 4) {
        return 0;
    }

    if (count < 7) {
        return n - 999;
    }

    if (count < 10) {
        return 999000
             + 2 * (n - 999999);
    }

    if (count < 13) {
        return 999000
             + 1998000000LL
             + 3 * (n - 999999999);
    }

    if (count < 16) {
        return 999000
             + 1998000000LL
             + 2997000000000LL                     
             + 4 * (n - 999999999999LL);
    }

    return 999000
         + 1998000000LL
         + 2997000000000LL
         + 3996000000000000LL
         + 5 * (n - 999999999999999LL);
}