# Gtest 单元测试入门

+   下载gtest并编译 
```
    cd googletest-release-1.12.1
    mkdir build && cd build
    cmake ../ -Dgtest_build_samples=ON
    make
```
    在 build/lib 目录生成库文件 libgtest.a

+   配置cmake
    参考demo中的CMakeLists.txt,其中add_unit_test.cpp为单元测试文件，编译如下
```
    cd demo
    mkdir build && cd build
    cmake ../
    make 
    ./add_unit_test
```

