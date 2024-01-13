#include <stdio.h>
#include <gmp.h>

int main() {
    // Set precision to at least 35 digits
    mpf_set_default_prec(128);

    // Initialize variables
    mpf_t pi;
    mpf_init(pi);

    // Calculate pi using the GMP library
    mpf_const_pi(pi);

    // Print the first 34 digits of pi
    gmp_printf("%.34Ff\n", pi);

    // Clear memory
    mpf_clear(pi);

    return 0;
}

