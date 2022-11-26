#ifndef FIMDLP_H
#define FIMDLP_H
#include <vector>
#include <Python.h>
#define PY_SSIZE_T_CLEAN
namespace FImdlp
{
    class FImdlp
    {
    public:
        FImdlp();
        ~FImdlp();
        std::vector<int> cutPoints(std::vector<int> &);
    };
}
#endif