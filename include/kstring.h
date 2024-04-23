#ifndef _KSTRING_H_
#define _KSTRING_H_

#include "common.h"

class KString {
private:
    int m_length;
    char* m_pstr;

public:
    KString();
    KString(const char* pstr);
    KString& operator=(const KString& str);
    ~KString();

    friend std::ostream& operator<<(std::ostream& out, const KString& str);

    int get_length() const;
    char * get_str() const;

};


#endif // _KSTRING_H_
