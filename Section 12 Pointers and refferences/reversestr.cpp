// You do NOT have to write a main() function. The main() function is written by me
// behind the scenes to call your function and test your code.
#include <string>
#include <iostream>
std::string reverse_string(const std::string &str);

int main()
{
std::cout<<reverse_string("Hello")<<std::endl;
return 0;
}


std::string reverse_string(const std::string &str) {
    std::string reversed = str;
    int size=str.length();
    
    for (int i{0};i<size/2;i++){
        reversed[i]=reversed[i]+reversed[size-1-i]; 
        reversed[size-1-i]=reversed[i]-reversed[size-1-i];
        reversed[i]=reversed[i]-reversed[size-1-i];
    }
    return reversed;
}

/*
//SOLUTION

std::string reverse_string(const std::string& str) {
    std::string reversed;

    const char* start = str.c_str();                    // Pointer to the first character
    const char* end = str.c_str() + str.size() - 1;     // Pointer to the last character

    while (end >= start) {
        reversed.push_back(*end);   // Append the character at the end pointer to the reversed string
        end--;
    }

    return reversed;
}

*/