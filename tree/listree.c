#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct tree_node{
    char ch;
    struct tree_node *lc, *rc;
    unsigned lw, rw;
}tree_node, *tree;


