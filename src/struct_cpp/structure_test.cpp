#include <iostream>

struct Rectangle
{
    int lengthl;
    int breadth;
};
namespace first
{
int val = 500;
}
using namespace std;
int main()
{
    struct Rectangle r;

    r.breadth = 5;
    r.lengthl = 10;
    r = {10, 10};
    printf("Area of rectangle is %d", r.breadth * r.lengthl);

    struct Rectangle rect[5] = {{1, 2}, {3, 5}};
    printf("\nArea of rectagle from array struct is %d", rect[1].lengthl * rect[1].breadth);
    printf("\nValue is %d", first::val);
}