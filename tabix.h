#ifndef TABIX_H
#define TABIX_H


#ifdef __cplusplus
extern "C" {
#endif




char **parse_regions(char *regions_fname, char **argv, int argc, int *nregs);

//#define parse_regions(regions_fname, argv, argc, nregs) vwxyz(reg, argv, argc, nreg)

#ifdef __cplusplus
}
#endif

#endif
