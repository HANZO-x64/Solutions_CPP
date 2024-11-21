#include <iostream>
#include "requestProcessing.h"

// Callback function to handle the data received from the curl request
// ������� ��������� ������ ��� ��������� ������, ���������� �� ������� curl
size_t WriteCallback(void* contents, size_t size, size_t nmemb, void* userp)
{
    ((std::string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}