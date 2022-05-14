#include <iostream>
#include <time.h>
using namespace std;

//generator
int main()
{
    srand(time(0));
    string pass;
    //data
    string data = "abcdefghijklmnopqrstuvwxyz"
                  "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                  "0123456789"
                  "~!`@#$%^()[]|{};:&=-_+,./<>?";

    for (int i = 1; i <= 12; i++)
    {
        pass = pass + data[rand() % 93];
    }
    cout<<"password: "<<pass;

    return 0;

}