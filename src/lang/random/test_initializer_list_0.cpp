#include <iostream>

struct Test {
    Test(int aa, int bb, int cc)
        : a(aa), b(bb), c(cc)
    {
        if(aa > 3)
        {
            a = aa;
        }
    }

    int a, b, c;
};

void Test0() {

}

int main() {
    Test0();

    return 0;
}
