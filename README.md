# easydbg_script
简单的方法使用dbg中的脚本命令

## 如何开发

标准的构建环境：
- Windows 2022
- Visual Studio 2022
- Python 3.13


### clone项目

```bash
git clone git@github.com:cr49-lib/easydbg-script.git # clone 项目
git submodule update --init --recursive # 更新子模块
```

### 安装依赖

依赖项:
- CMake
- Ninja
- Python3
- pybind11

```bash
pip install pybind11 # 安装pybind11
```

## 构建

### 64位构建

```bash
"Your VS Path"\Common7\Tools\VsDevCmd.bat -arch=amd64 -host_arch=amd64 # 加载64位 vs环境
cmake --build --preset x64-debug # 生成预设配置文件
cmake --build ./out/build/x64-debug # 构建预设文件
```
