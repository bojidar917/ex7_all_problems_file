#pragma once

class String
{
public:
    String();
    String(const char* str);
    String(const String& other);
    String& operator=(const String& other);
    ~String();

private:
    char * str;
    
    void copy(const String& other);
    void clear();
};