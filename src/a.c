#include <stdio.h>
#include <b.h>

int a() {
    int some_value = 1;
    b(some_value); // No type hints for b. :(
    return some_value;
}
