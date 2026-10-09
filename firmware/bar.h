#pragma once
#include <cmath>
inline int bar(float v,float lo,float hi){if(!std::isfinite(v)||hi<=lo)return -1;float n=(v-lo)/(hi-lo);return int((n<0?0:n>1?1:n)*124);}
