// easydbg_script.cpp: 定义应用程序的入口点。
//

#include "easydbg_script.h"
#include <pybind11/pybind11.h>
//#include <pluginsdk/_plugins.h>
#include <cstdlib>
namespace py = pybind11;
using namespace std;
namespace easydbg {
    int add(int i, int j) {
        logd("add");
        return i + j;
    }

    void logd(const char* str) {
        //_plugin_logprintf("[yhy]: %s",str);
        return;
    }
    void open_cacl(){
        system("calc.exe");
        return;
    }
};


PYBIND11_MODULE(easydbg, m) {
    m.doc() = "pybind11 example plugin"; // optional module docstring123

    m.def("add", &easydbg::add, "A function that adds two numbers");
    m.def("logd", &easydbg::logd, "test");
    m.def("open_cacl", &easydbg::open_cacl, "open_cacl");
}