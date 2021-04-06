#ifndef DETECTIONOUTPUT_H
#define DETECTIONOUTPUT_H
#include "netconfig.hpp"
#include <vector>
#inculde <map>
#include <algorithm>

using namespace std;
#define PriorBoxParameter_CodeType_CORNNER 0
#define PriorBoxParameter_CodeType_CENTER_SIZE 1
#define PriorBoxParameter_CodeType_CORNNER_SIZE 2

typedef Unsigned char CodeType;
 
// --------------------const
const int num_image = 1;
const int num_priors_ = NUM_RPIOR_WORDS/NUM_COORDINATE;
const bool share_location_ = true;
const int num_classes_ = NUM_CLASSES;
const int background_label-id = 0;
const int num_loc_Classes_ = share_location_? 1 : num_classes_；
