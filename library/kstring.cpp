#include "kstring.h"

KString::KString() {
    m_length = 0;
    m_pstr = NULL;
}

/**
 * 转换构造函数：
 *      实现将C字符串和std::string 类的字符串转换为KString的字符串
*/
KString::KString(const char* pstr) {
    m_length = strlen(pstr);
    if (pstr != NULL) {
        m_pstr = new char[m_length + 1];
        strncpy(m_pstr, pstr, m_length);
    } else {
        m_pstr = new char[1];
        *m_pstr = '\0';
    }
}

KString& KString::operator=(const KString& str) {
    if (this == &str) {
        return *this;
    }

    if (this->m_pstr != NULL) {
        delete[] this->m_pstr;
    }

    m_length = strlen(str.m_pstr);
    m_pstr = new char[m_length + 1];
    strncpy(m_pstr, str.m_pstr, m_length);

    return *this;
}

KString::~KString() {
    if (m_pstr != NULL) {
        delete[] m_pstr;
    }
}


char * KString::get_str() const {
    return m_pstr;
}

int KString::get_length() const {
    return m_length;
}

/**
 * << 运算符的重载
 * 重载‘<<’运算符通常使用全局的方式进行重载，因为cout是ostream的对象
*/
std::ostream& operator<<(std::ostream& out, const KString& str) {
    out << str.get_str() << std::endl;
    return out;
}

