#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle r;
    r.length = 10;
    r.breadth = 5;

    printf("Length : %d, Breadth : %d \n", r.length, r.breadth);
    cout << sizeof(r.breadth) <<endl;
    struct Rectangle *p = &r;
    printf("Length P: %d, Breadth P: %d \n", (*p).length, (*p).breadth);
    printf("Length ->: %d, Breadth ->: %d\n", p -> length, p -> breadth);

    struct Rectangle *s;
    s = new struct Rectangle(); //(struct Rectangle*) malloc(sizeof(struct Rectangle));
    s -> length = 10;
    s -> breadth = 5;
    printf("New Length: %d " , s->length);

    return 0;
}