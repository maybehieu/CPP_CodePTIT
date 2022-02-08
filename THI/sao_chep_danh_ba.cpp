#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;

int main()
{
    ifstream infile;
    infile.open("sotay.txt");
    char s[1000] = {};
    infile >> s;
    cout << s;
    return 0;
}