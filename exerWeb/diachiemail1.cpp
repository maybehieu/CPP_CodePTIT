#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

int main()
{
    std::string s, temp;
    std::cin >> s;
    std::transform(s.begin(), s.end(), s.begin(), ::tolower);
    temp = s;
    std::istringstream ss(s);
    std::string token;
    while (ss >> token)
    {
        std::cout << token << std::endl;
    }
}