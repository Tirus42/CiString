#pragma once

#include <string>

/**
 * Case insensitive string implementation
 * based on std::string.
 *
 * Just overrides the <, >, == and != operator.
*/
class CiString : public std::string {
    private:
        bool equals(const char* other, size_t strLength) const;

    public:
        CiString();
        CiString(const char* str);
        CiString(const std::string& str);
        CiString(const CiString& str);

        bool operator<(const std::string& other) const;
        bool operator>(const std::string& other) const;

        bool operator==(const std::string& other) const;
        bool operator!=(const std::string& other) const;

        bool operator==(const char* other) const;
        bool operator!=(const char* other) const;
};
