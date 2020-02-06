

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

enum day {mon=1, tue};
typedef string spawn;
int main(){
    spawn s1,s2;
    s1 = "spawn";
    s2 = "hellp";
    int A[5];
   // int B[10] = {1,2,3,4,5};
    day d;
    d=tue;
    s1 = s1+" "+s2;
    int B[5] = {1,2,3,4,5};
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout<<B[i]<<endl;
    }
    
    printf("%s", s1.c_str());
}