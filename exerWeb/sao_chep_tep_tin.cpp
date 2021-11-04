#include <iostream>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    // std::ofstream outfile1;
    // outfile1.open("PTIT.in");
    // char data[100] = "Ngon ngu lap trinh C++";
    // outfile1 << data << endl;
    // char temp[100] = {};
    // outfile1.close();
    std::ifstream infile;
    infile.open("PTIT.in");
    // infile >> temp;
    std::ofstream outfile;
    outfile.open("PTIT.out");
    // outfile << temp << endl;
    outfile << infile.rdbuf();
    infile.close();
    outfile.close();
    return 0;
}