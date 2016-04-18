#ifndef MONOSTRING_H
#define MONOSTRING_H

#include <string>
#include <iostream>

using std::string;

class MonoString
{
    public:
        MonoString();
        MonoString(const char* s);
        ~MonoString();

        // Returns a std::string constructed from this MonoString
        string std_string() const;

        // Returns the length of the string
        size_t size() const;
        size_t length() const;
    private:
        char* _str;
        size_t _len;
        friend std::ostream& operator<<(std::ostream& os, const MonoString& s);
};

#endif // MONOSTRING_H
