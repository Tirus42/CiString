#include "CiString.h"

CiString::CiString() :
    std::string() {}

CiString::CiString(const char* str) :
    std::string(str) {}

CiString::CiString(const std::string& str) :
    std::string(str) {}

CiString::CiString(const CiString& str) :
    std::string(str) {}

bool CiString::operator<(const std::string& other) const {
    size_t length = std::min(this->size(), other.size());

    for (size_t i = 0; i < length; ++i) {
        char a = tolower((*this)[i]);
        char b = tolower(other[i]);

        if (a < b) {
            return true;
        } else if (a > b) {
            return false;
        }
    }

    return this->size() < other.size();
}

bool CiString::operator>(const std::string& other) const {
    size_t length = std::min(this->size(), other.size());

    for (size_t i = 0; i < length; ++i) {
        char a = tolower((*this)[i]);
        char b = tolower(other[i]);

        if (a > b) {
            return true;
        } else if (a < b) {
            return false;
        }
    }

    return this->size() > other.size();
}

bool CiString::operator==(const std::string& other) const {
    if (size() != other.size())
        return false;

    for (size_t i = 0; i < size(); ++i) {
        char a = tolower((*this)[i]);
        char b = tolower(other[i]);

        if (a != b) {
            return false;
        }
    }

    return true;
}

bool CiString::operator!=(const std::string& other) const {
    return !(*this == other);
}
