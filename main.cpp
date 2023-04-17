#include <iostream>
#include <string>

bool IsKPeriodic(const std::string& str, int k)
{
    if (str.size() % k || k <= 0 || k >= str.size())
        return false;

    for (size_t i = 0; i < str.size() - k; ++i)
        if (str[i] != str[i + k])
            return false;

    return true;
}

int main()
{
    std::cout << (IsKPeriodic("abcabcabc", 3) ? "yes" : "no") << std::endl;
    std::cout << (IsKPeriodic("abcdabcdabcd", 4) ? "yes" : "no") << std::endl;
    std::cout << (IsKPeriodic("abcabc", 5) ? "yes" : "no") << std::endl;
    std::cout << (IsKPeriodic("abcabcaaa", 1) ? "yes" : "no") << std::endl;
    std::cout << (IsKPeriodic("abcabcqwr", 1) ? "yes" : "no") << std::endl;
    std::cout << (IsKPeriodic("abdabdabd", 3) ? "yes" : "no") << std::endl;

    return 0;
}
