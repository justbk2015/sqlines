#pragma once
#include <string>
using namespace std;
class License 
{
public:
    bool IsLicenseCheckRequired()
    {
        return false;
    }
    bool IsEmpty()
    {
        return false;
    }
    void Set(const char* exec)
    {

    }
    string GetName() 
    {
	    return string("just a test");
    }
};
