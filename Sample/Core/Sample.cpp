#include "Sample.h"

namespace Core {

Sample::Sample()
    : m_message()
{
}


Sample::~Sample()
{
}

int
Sample::countAlphabet() const
{
    const size_t len = this->m_message.length();
    int cnt = 0;
    for ( size_t i = 0; i < len; ++ i ) {
        const char  tmp = this->m_message.at(i);
        if ( ('A' <= tmp) && (tmp <= 'Z') ) {
            ++ cnt;
        }
        if ( ('a' <= tmp) && (tmp <= 'z') ) {
            ++ cnt;
        }
    }

    return ( static_cast<int>(cnt) );
}

void
Sample::setMessage(const std::string &message)
{
    this->m_message = message;
}

}
