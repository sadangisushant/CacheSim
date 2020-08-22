#ifndef SIM_CACHE_H
#define SIM_CACHE_H
#include <iostream>

using namespace std;

typedef struct cache_params{
    unsigned long int block_size;
    unsigned long int l1_size;
    unsigned long int l1_assoc;
    unsigned long int vc_num_blocks;
    unsigned long int l2_size;
    unsigned long int l2_assoc;
}cache_params;

// Put additional data structures here as per your requirement
struct cache_node{
	unsigned long tag;
	short valid=0;
	short lru_count=0;
	short dirty= 0; 
};

#endif
