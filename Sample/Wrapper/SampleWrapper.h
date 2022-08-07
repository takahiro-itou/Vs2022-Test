#pragma once

#include    "Sample.h"

namespace Wrapper {

public ref class SampleWrapper
{
public:

    SampleWrapper();
    ~SampleWrapper();
    !SampleWrapper();

public:

    int countAlphabet();
    void setMessage(System::String^ message);

private:

    Core::Sample *  m_ptrObj;
};

}
