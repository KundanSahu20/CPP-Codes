/* Create class String having pointer to character as data member and provide following Facilities: 
a) Constructor for initialization and memory allocation.
b) Destructor for memory release.
c) Overloaded operators + to add two string object.
d) Overloaded operator = to assign one string object to other string object.
e) Overloaded operator == to compare whether the two string objects are equal or not.
f) Overloaded operator < to compare whether first-string object is less than second-string object. 
g) Overloaded operator > to compare whether first-string object is greater than second-string object or not.
h) Overloaded operator <= to compare whether first string object is less than or equal to second string object or not
i) Overloaded operator >= to compare whether first string object is greater than or equal to second string object.
j) Overloaded operator != to compare whether first string object is not equal to second string object or not.
k) Overloaded insertion and extraction operators for input in data member and display output of data members.*/

#include <iostream>
#include <cstring>

class String {
private:
    char* str;
public:
    String(const char* initialStr = "") {
        int len = strlen(initialStr);
        str = new char[len + 1];
        strcpy(str, initialStr);
    }

    // Destructor (release memory)
    ~String() {
        delete[] str;
    }

    // Overloaded addition operator (+) to concatenate two strings
    String operator+(const String& other) const {
        int len1 = strlen(str);
        int len2 = strlen(other.str);
        char* result = new char[len1 + len2 + 1];
        strcpy(result, str);
        strcat(result, other.str);
        return String(result);
    }

    // Overloaded assignment operator (=)
    String& operator=(const String& other) {
        if (this != &other) {
            delete[] str;
            int len = strlen(other.str);
            str = new char[len + 1];
            strcpy(str, other.str);
        }
        return *this;
    }

    // Overloaded equality operator (==)
    bool operator==(const String& other) const {
        return strcmp(str, other.str) == 0;
    }

    // Overloaded less than operator (<)
    bool operator<(const String& other) const {
        return strcmp(str, other.str) < 0;
    }

    // Overloaded greater than operator (>)
    bool operator>(const String& other) const {
        return strcmp(str, other.str) > 0;
    }

    // Overloaded insertion operator (for display)
    friend std::ostream& operator<<(std::ostream& os, const String& s) {
        os << s.str;
        return os;
    }

    // Overloaded extraction operator (for input)
    friend std::istream& operator>>(std::istream& is, String& s) {
        char buffer[100]; // Assume input won't exceed 100 characters
        is >> buffer;
        s = String(buffer);
        return is;
    }
};

int main() {
    String s1("Hello");
    String s2("World");

    String s3 = s1 + s2;
    std::cout << "Concatenated string: " << s3 << std::endl;

    String s4;
    std::cout << "Enter a string: ";
    std::cin >> s4;
    std::cout << "You entered: " << s4 << std::endl;

    if (s1 == s2)
        std::cout << "s1 and s2 are equal.\n";
    else if (s1 < s2)
        std::cout << "s1 is less than s2.\n";
    else
        std::cout << "s1 is greater than s2.\n";

    return 0;
}
