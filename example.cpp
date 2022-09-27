#include "example.h"
void Example::say_hello() {
    cout << "hello,world!" << endl;
}

word::word(std::string content) :m_content(content) {
    cout << "word:" << m_content << endl;
}

word::~word()
{
    cout << "~word:" << m_content << endl;
}

void word::updateWord(std::string new_content) {
    m_content = new_content;
}

string word::getWord(void) {
    return m_content;
}

int fact(int n) {
    cout << "fact:" << n << endl;
    if (n < 0) {
        return 0;
    }
    if (n == 0) {
        return 1;
    }
    else {
        return n * fact(n-1);
    }
}

int word::testFunc(int data1, double data2, char data3) {
    cout << "data1:" << data1 << endl;
    cout << "data2:" << data2 << endl;
    cout << "data3:" << data3 << endl;
    return 100;
}

int word::testReference(int &data) {
    data += 100;
    return 500;
}

int word::testPointer(int *data) {
    *data += 100;
    return 500;
}
