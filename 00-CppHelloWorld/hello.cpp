#include <iostream>
#include <fstream>
using namespace std;

int main() {
ofstream output("output.txt");
output << "Hello World";
output.close();

}