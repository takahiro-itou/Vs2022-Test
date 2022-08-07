#include "pch.h"

#include <msclr/marshal_cppstd.h>

#include "SampleWrapper.h"

namespace Wrapper {

SampleWrapper::SampleWrapper()
    : m_ptrObj(new Core::Sample())
{
}

SampleWrapper::~SampleWrapper()
{
    this->!SampleWrapper();
}

SampleWrapper::!SampleWrapper()
{
    if ( this->m_ptrObj ) {
        delete  this->m_ptrObj;
        this->m_ptrObj  = nullptr;
    }
}

int SampleWrapper::countAlphabet()
{
    return ( this->m_ptrObj->countAlphabet() );
}

void SampleWrapper::setMessage(System::String^ message)
{
    std::string tmp = msclr::interop::marshal_as<std::string>(message);
    this->m_ptrObj->setMessage(tmp);
}

}
