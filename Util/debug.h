//
// Created by Admin on 15/05/2022.
//

#ifndef TP5_C_DEBUG_H
#define TP5_C_DEBUG_H
#pragma once

#ifdef ISDEBUG
#include <iostream>
#define DEBUG(msg) { \
std::cerr<< " Debug(" <<__FILE__ <<", "<<__LINE__ <<") " << msg << '\n'; \
std::cerr.flush(); }
#else
#define DEBUG(msg)
#endif
#endif //TP5_C_DEBUG_H
