//
// Created by 57286 on 2022/11/19.
//

#ifndef CMAKE_BUILD_DEBUG_MINGW__PRINTLNF_H_
#define CMAKE_BUILD_DEBUG_MINGW__PRINTLNF_H_

#define PRINTLNF(format,...) printf("("__FILE__":%d)%s:"format"\n",__LINE__,__FUNCTION__,##__VA_ARGS__)
#define PRINTLNF_INT(int_value) PRINTLNF(#int_value":%d\n",int_value)
#define PRINTLNF_DOUBLE(double_value) PRINTLNF(#double_value":%f\n",double_value)
#define PRINTLNF_CHAR(char_value) PRINTLNF(#char_value":%c\n",char_value)

#endif //CMAKE_BUILD_DEBUG_MINGW__PRINTLNF_H_
