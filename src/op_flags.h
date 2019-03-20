#ifndef __SF_OP_FLAGS
#define __SF_OP_FLAGS

enum NFOpFlags {
     OP_NF_ACCEPT = ( 1 << 0), 
     OP_NF_CONNECT = (1 << 1),
     OP_NF_SEND   = (1 << 2),
     OP_NF_RECV   = (1 << 3),
     OP_NF_CLOSE  = (1 << 4),
     OP_NF_DELEGATE  = (1 << 5),
     OP_NF_INHERIT  = (1 << 6),
     OP_NF_TRUNCATE  = (1 << 7),
     OP_NF_FINAL  = (1 << 8)
};

#endif 
