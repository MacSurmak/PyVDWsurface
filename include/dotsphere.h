#ifndef _dotsphere_h
#define _dotsphere_h

#include <vector>
#include "Vec3.h"
using namespace std;
using namespace OpenMM;

vector<Vec3> dotsphere(int density, int seed = -1); // Added seed parameter with default

#endif