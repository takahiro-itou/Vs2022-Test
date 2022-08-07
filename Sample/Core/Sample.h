#pragma once

#include    <string>

namespace Core {

class Sample
{
public:
    Sample();
    virtual ~Sample();

public:
    int countAlphabet() const;
    void setMessage(const std::string &message);

private:
    std::string     m_message;
};

}
