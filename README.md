This is my first GUI application written with C++ and wxWidgets.

BUILD INSTRUCTIONS  
___

To build, you need to build wxWidgets (version 3.3.0 or later) from source with cmake. Visit https://docs.wxwidgets.org/latest/overview_cmake.html for wxWidgets cmake build instrunctons.  

```bash
git commit https://github.com/usithadev/firstwx

cd firstwx

cmake -S . -B ./build -DwxWidgets_DIR=path/to/wxWidgets/lib/cmake/wxWidgets -DwxWidgets_CONFIGURATION=mswu -G "MinGW Makefiles"

cd build

cmake --build .
```  

Now you can run the FirstWX.exe in the build folder. :)  

Just made this repo public for fun.
