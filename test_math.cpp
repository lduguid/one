#include <cassert>

#include "mymath.h"


void test_add(void)
{
    assert(add(1,1)==2);
}


void test_add_fail(void)
{
    assert(add(1,1)==3);
}


int main()
{
    test_add();
    test_add_fail();
}