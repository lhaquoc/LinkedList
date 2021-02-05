#include <stdio.h>
int y = 1;

void TuoiMoi(int *tuoi) {
    *tuoi = *tuoi  + 1;
}

int main(void) {
    int x = 4;
    int tuoi_hien_tai = 27;
    printf("x is stored at %p\n", &x);
    printf("y is stored at %p\n", &y);
    TuoiMoi(&tuoi_hien_tai);
    printf("Tuoi: %d\n", tuoi_hien_tai);
    return 0;
}
