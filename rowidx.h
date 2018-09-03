#ifndef ROWIDX_H
#define ROWIDX_H

#include <stddef.h>

#define ROWIDX(i,j,ncols) (((i)*(ncols))+(j))

size_t rowidx(size_t, size_t, size_t);

#endif /* ROWIDX_H */
