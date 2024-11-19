// easydbg_script.cpp: 定义应用程序的入口点。
//

#include "easydbg_script.h"
#include <pybind11/pybind11.h>
namespace py = pybind11;
using namespace std;

int add(int i, int j) {
    return i + j;
}

PYBIND11_MODULE(example, m) {
    m.doc() = "pybind11 example plugin"; // optional module docstring123

    m.def("add", &add, "A function that adds two numbers");
}