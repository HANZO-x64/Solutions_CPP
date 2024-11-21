#include <iostream>
#include <string>
#include <curl/curl.h>
#include <gumbo.h>
#include "requestProcessing.h"

using namespace std;

// Function to fetch the page content
// Функция для извлечения содержимого страницы
string FetchPage(const string& url)
{
    CURL* curl;
    CURLcode res;
    string readBuffer;

    curl = curl_easy_init();
    if (curl)
    {
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
    }
    return readBuffer;
}