#define NO_IMPORT_ARRAY
#include "FImdlp.h"
namespace FImdlp
{
    FImdlp::FImdlp()
    {
    }
    FImdlp::~FImdlp()
    {
    }
    std::vector<int> FImdlp::cutPoints(std::vector<int> &src)
    {
        std::vector<int> dest;
        int i;
        int n = src.size();
        for (i = 0; i < n; i++)
        {
            dest.push_back(src.at(i) * 42);
        }
        return dest;
    }
}