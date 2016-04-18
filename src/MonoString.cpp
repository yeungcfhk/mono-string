#include "MonoString.h"
#include <cstring>

using std::string;

MonoString::MonoString()
{
    _len = 0;
    _str = new char[1];
    _str[0] = '\0';
}

MonoString::MonoString(const char* s)
{
    _len = strlen(s);
    _str = new char[_len+1];
    strncpy(_str, s, _len);
    _str[_len] = '\0';
}

MonoString::~MonoString()
{
    delete[] _str;
}

string MonoString::std_string() const
{
    return string(_str);
}

size_t MonoString::size() const
{
    return _len;
}

size_t MonoString::length() const
{
    return _len;
}

std::ostream& operator<<(std::ostream& os, const MonoString& s)
{
    return os << s._str;
}
