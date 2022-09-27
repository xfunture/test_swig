#include <iostream>
#include <string>
using namespace std;
class Example{
public:
    void say_hello();
};

class word
{
public:
    word(string content);
    virtual ~word();
    virtual void updateWord(string new_content);
    string getWord(void);
    int testFunc(int data1,double data2,char data3);
    int testReference(int& data);
    int testPointer(int* data);

private:
    string m_content;

};

int fact(int n);