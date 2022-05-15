//
// Created by maxim on 15/05/2022.
//

#ifdef ISDEBUG
#include <iostream>
#define DEBUG(msg) { \
std::cerr<< Debug(<<FILE <<,<<LINE <<) << msg << std::endl; \
std::cerr.flush(); }
#else
#define DEBUG(msg)
#endif
