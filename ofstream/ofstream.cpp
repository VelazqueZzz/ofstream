#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char** argv) {
    ofstream file("test.txt");
    if (!file.is_open())return 1;
    file << "HOLLA HOLA GET A DOLLAR";
    file.close();
    return 0;
}
 

