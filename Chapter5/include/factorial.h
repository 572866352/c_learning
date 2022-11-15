//条件编译 避免重复引入头文件
//if not define -> define
//此外还有 #ifdef #if
//define(宏) -> 真/假
#ifndef CMAKE_BUILD_DEBUG_MINGW_INCLUDE_FACTORIAL_H_
#define CMAKE_BUILD_DEBUG_MINGW_INCLUDE_FACTORIAL_H_

unsigned int Factorial(unsigned int n);

//结束要有这个
#endif //CMAKE_BUILD_DEBUG_MINGW_INCLUDE_FACTORIAL_H_
