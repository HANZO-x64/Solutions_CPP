// Объедините строк, добавляя буквы в чередующемся порядке
std::string ConcatenationOfStrings(const std::string& word1, const std::string & word2)
{
    std::string result;
    size_t minLenght = std::min(word1.size(), word2.size());

    for (size_t i = 0; i < minLenght; i++)
    {
        result += word1[i];
        result += word2[i];
    }

    result += word1.substr(minLenght);
    result += word2.substr(minLenght);

    return result;
}

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        std::string word3 = ConcatenationOfStrings(word1, word2);

        std::cout << "word3 = " << word3 << std::endl;

        return word3;
    }
};