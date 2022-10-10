#ifndef __MODETEST_H__
#define __MODETEST_H__

void *setup(int argc, char **argv, void **virtual_ptr);
void *hardcoded_setup(void **virtual_ptr);
void teardown(void *state);

#endif
