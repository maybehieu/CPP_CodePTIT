#include <iostream>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    std::ifstream infile;
    infile.open("PTIT.in");
    std::ofstream outfile;
    outfile.open("PTIT.out");
    std::string s;
    while (!infile.eof())
    {
        getline(infile, s);
        // infile >> s;
        outfile << s << endl;
        // outfile << endl;
    }
    infile.close();
    outfile.close();
    return 0;
}