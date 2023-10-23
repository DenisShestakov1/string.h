#include <iostream>
#include <cstring>

int main() {
    char source[] = "Hello, ";
    char destination[100] = "world";

 
    strcat(destination, source);
    std::cout << "strcat: " << destination << std::endl;


    char copy[100];
    strcpy(copy, source);
    std::cout << "strcpy: " << copy << std::endl;

    
    char strncat_destination[100] = "Hello, ";
    char strncat_source[] = "world";
    strncat(strncat_destination, strncat_source, 3);
    std::cout << "strncat: " << strncat_destination << std::endl;

  
    char strncpy_copy[100];
    char strncpy_source[] = "Hello, world";
    strncpy(strncpy_copy, strncpy_source, 5);
    std::cout << "strncpy: " << strncpy_copy << std::endl;

   
    char str1[] = "apple";
    char str2[] = "banana";
    int result = strcmp(str1, str2);
    std::cout << "strcmp: " << result << std::endl;

 
    char str3[] = "apple";
    char str4[] = "appetizer";
    int n = 3;
    result = strncmp(str3, str4, n);
    std::cout << "strncmp: " << result << std::endl;

   
    char str5[] = "Hello, world!";
    size_t length = strlen(str5);
    std::cout << "strlen: " << length << std::endl;

 std::string mainString = "Hello, world! This is a test string.";
    std::string searchString = "world";

    size_t found = mainString.find(searchString);

    if (found != std::string::npos) {
        std::cout << "Substring found at position: " << found << std::endl;
    } else {
        std::cout << "Substring not found." << std::endl;
    }

    return 0;
}
