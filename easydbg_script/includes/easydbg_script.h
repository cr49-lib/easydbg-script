// easydbg_script.h: 标准系统包含文件的包含文件
// 或项目特定的包含文件。

#pragma once

#include <iostream>
//#include "pluginsdk/bridgemain.h"
//#include "pluginsdk/_plugins.h"
//
//#include "pluginsdk/_scriptapi_argument.h"
//#include "pluginsdk/_scriptapi_assembler.h"
//#include "pluginsdk/_scriptapi_bookmark.h"
//#include "pluginsdk/_scriptapi_comment.h"
//#include "pluginsdk/_scriptapi_debug.h"
//#include "pluginsdk/_scriptapi_flag.h"
//#include "pluginsdk/_scriptapi_function.h"
//#include "pluginsdk/_scriptapi_gui.h"
//#include "pluginsdk/_scriptapi_label.h"
//#include "pluginsdk/_scriptapi_memory.h"
//#include "pluginsdk/_scriptapi_misc.h"
//#include "pluginsdk/_scriptapi_module.h"
//#include "pluginsdk/_scriptapi_pattern.h"
//#include "pluginsdk/_scriptapi_register.h"
//#include "pluginsdk/_scriptapi_stack.h"
//#include "pluginsdk/_scriptapi_symbol.h"
//
//#include "pluginsdk/DeviceNameResolver/DeviceNameResolver.h"
//#include "pluginsdk/jansson/jansson.h"
//#include "pluginsdk/lz4/lz4file.h"
//#include "pluginsdk/TitanEngine/TitanEngine.h"
//#include "pluginsdk/XEDParse/XEDParse.h"
//
//#ifdef _WIN64
//#pragma comment(lib, "x64dbg.lib")
//#pragma comment(lib, "x64bridge.lib")
//#pragma comment(lib, "DeviceNameResolver/DeviceNameResolver_x64.lib")
//#pragma comment(lib, "jansson/jansson_x64.lib")
//#pragma comment(lib, "lz4/lz4_x64.lib")
//#pragma comment(lib, "TitanEngine/TitanEngine_x64.lib")
//#pragma comment(lib, "XEDParse/XEDParse_x64.lib")
//#else
//#pragma comment(lib, "x32dbg.lib")
//#pragma comment(lib, "x32bridge.lib")
//#pragma comment(lib, "DeviceNameResolver/DeviceNameResolver_x86.lib")
//#pragma comment(lib, "jansson/jansson_x86.lib")
//#pragma comment(lib, "lz4/lz4_x86.lib")
//#pragma comment(lib, "TitanEngine/TitanEngine_x86.lib")
//#pragma comment(lib, "XEDParse/XEDParse_x86.lib")
//#endif //_WIN64
// TODO: 在此处引用程序需要的其他标头。

namespace easydbg{
    int add(int i, int j);
    void logd(const char* str);
    void open_cacl();
}