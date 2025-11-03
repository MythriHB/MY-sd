#include <stdio.h>
#include <time.h>

int main() {
    clock_t start, end;
    double time_taken;

    // -------- Linear O(n) --------
    int n1 = 1000000;  // input size
    start = clock();
    for(int i = 0; i < n1; i++) {
        // do nothing
    }
    end = clock();
    time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Linear O(n), input=%d: %f seconds\n", n1, time_taken);

    // -------- Quadratic O(n^2) --------
    int n2 = 500;  // smaller input to keep runtime short
    start = clock();
    for(int i = 0; i < n2; i++) {
        for(int j = 0; j < n2; j++) {
            // do nothing
        }
    }
    end = clock();
    time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Quadratic O(n^2), input=%d: %f seconds\n", n2, time_taken);

    return 0;
}
