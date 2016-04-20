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

size_t MonoString::find(const char* s) const
{
    char* p = strstr(_str, s);
    if (!p)
        return -1;
    return p - _str;
}

size_t MonoString::find(const char* s, size_t pos) const
{
    char* buf = _str;
    buf += pos;
    char* p = strstr(buf, s);
    if (!p)
        return -1;
    return p - _str;
}

std::ostream& operator<<(std::ostream& os, const MonoString& s)
{
    return os << s._str;
}
