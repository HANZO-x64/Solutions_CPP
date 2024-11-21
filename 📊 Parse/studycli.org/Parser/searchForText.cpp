#include <iostream>
#include <string>
#include <curl/curl.h>
#include <gumbo.h>

using namespace std;

// Recursive function to search for specific tags in the parsed HTML
// Рекурсивная функция для поиска определенных тегов в проанализированном HTML
void searchForText(GumboNode* node, string& result)
{
    if (node->type == GUMBO_NODE_TEXT)
    {
        //result.append(node->v.text.text, node->v.text.length);
        result.append(node->v.text.text);
    }
    else if (node->type == GUMBO_NODE_ELEMENT)
    {
        for (unsigned int i = 0; i < node->v.element.children.length; ++i)
        {
            searchForText(static_cast<GumboNode*>(node->v.element.children.data[i]), result);
        }
    }
}