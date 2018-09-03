#include "rowidx.h"

size_t rowidx(size_t i, size_t j, size_t ncols){
    return i*ncols + j;
}
