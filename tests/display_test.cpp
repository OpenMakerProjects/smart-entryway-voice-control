#include "../firmware/bar.h"
#include <cassert>
#include <iostream>
int main(){assert(bar(20,0,40)==62);assert(bar(50,0,100)==62);assert(bar(-10,0,40)==0);assert(bar(100,0,40)==124);assert(bar(NAN,0,40)==-1);assert(bar(1,2,2)==-1);std::cout<<"OLED scale, bounds and invalid-input tests passed\n";}
