#ifndef HASH_TABLES_H
#define HASH_TABLES_H

/* Other necessary includes */

/* Structure for a hash node */
typedef struct hash_node_s
{
    /* Key-value pair */
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

/* Structure for a hash table */
typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;

/* Function prototype */
hash_table_t *hash_table_create(unsigned long int size);

#endif /* HASH_TABLES_H */
