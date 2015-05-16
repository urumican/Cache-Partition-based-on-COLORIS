#ifndef _MY_LIST_H_
#define _MY_LIST_H_

#include <linux/list.h>
#include <linux/mm_types.h>

//#define MY_LIST_DEBUG

/* Self-defined list_to_page() */
/* Different from the one in <linux/mm/readahead.c> */
#define list_to_page(head) (list_entry(head, struct page, lru))

/* singly-linked list */
typedef struct _list {

  /* The first page element in the list */
  struct list_head *head;

  /* The number of page in the list */
  int num;
} LIST;

void list_insert(LIST *list, struct page *pg);
struct page *list_remove(LIST *list);

#endif

/* vi: set et sw=2 sts=2: */
