#include "numbers.h"

int main() {
    int x, y, z;
    x = get_number();
    y = get_number();
    z = multiply(x,y);
    display_number(z);

    return 0;
}