#include <iostream>

// alternativeTo:
// typedef std::string text_t;

// more suitable for templates
// its called: `type aliases`

using text_t = std::string;

int main() {
    
    text_t name = "Matrax";
    return 0;
}