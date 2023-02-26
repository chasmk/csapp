/* 
 * Code for basic C skills diagnostic.
 * Developed for courses 15-213/18-213/15-513 by R. E. Bryant, 2017
 */

/*
 * This program implements a queue supporting both FIFO and LIFO
 * operations.
 *
 * It uses a singly-linked list to represent the set of queue elements
 */

#include <stdlib.h>
#include <stdio.h>

#include "harness.h"
#include "queue.h"

/*
  Create empty queue.
  Return NULL if could not allocate space.
*/
queue_t *q_new()
{
    queue_t *q =  malloc(sizeof(queue_t));
    /* What if malloc returned NULL? */
    if(q == NULL){
      return NULL;
    }
    q->head = NULL;
    q->tail = q->head;
    q->num = 0;
    return q;
}

/* Free all storage used by queue */
void q_free(queue_t *q)
{
    /* How about freeing the list elements? */
    /* Free queue structure */
    if(q == NULL) return;
    list_ele_t *tmp = q->head;
    while(tmp){
      list_ele_t *tmps = tmp->next;
      free(tmp);
      tmp = tmps;
    }
    free(q);
}

/*
  Attempt to insert element at head of queue.
  Return true if successful.
  Return false if q is NULL or could not allocate space.
 */
bool q_insert_head(queue_t *q, int v)
{
    list_ele_t *newh;
    /* What should you do if the q is NULL? */
    if(q == NULL)return false;
    newh = malloc(sizeof(list_ele_t));
    if(newh == NULL)return false;
    /* What if malloc returned NULL? */
    if(q->head == NULL)
      q->tail = newh;
    newh->value = v;
    newh->next = q->head;
    q->head = newh;
    q->num ++;
    return true;
}


/*
  Attempt to insert element at tail of queue.
  Return true if successful.
  Return false if q is NULL or could not allocate space.
 */
bool q_insert_tail(queue_t *q, int v)
{
    /* You need to write the complete code for this function */
    /* Remember: It should operate in O(1) time */
    list_ele_t *newh;
    /* What should you do if the q is NULL? */
    if(q == NULL)return false;
    newh = malloc(sizeof(list_ele_t));
    if(newh == NULL)return false;
    /* What if malloc returned NULL? */
    newh->value = v;
    newh->next = NULL;
    q->tail->next = newh;
    q->tail = newh;
    q->num ++;
    return true;
}

/*
  Attempt to remove element from head of queue.
  Return true if successful.
  Return false if queue is NULL or empty.
  If vp non-NULL and element removed, store removed value at *vp.
  Any unused storage should be freed
*/
bool q_remove_head(queue_t *q, int *vp)
{
    /* You need to fix up this code. */
    if(q == NULL || q->head == NULL)return false;
    list_ele_t *tmp = q->head;
    q->head = q->head->next;
    if(q->head == NULL) q->tail=NULL;
    if(vp != NULL)
      *vp = tmp->value;
    free(tmp);
    q->num --;
    return true;
}

/*
  Return number of elements in queue.
  Return 0 if q is NULL or empty
 */
int q_size(queue_t *q)
{
    /* You need to write the code for this function */
    /* Remember: It should operate in O(1) time */
    if(q == NULL || q->head == NULL)return 0;
    return q->num;
}

/*
  Reverse elements in queue.

  Your implementation must not allocate or free any elements (e.g., by
  calling q_insert_head or q_remove_head).  Instead, it should modify
  the pointers in the existing data structure.
 */
void q_reverse(queue_t *q)
{
    /* You need to write the code for this function */
    if(q == NULL || q->head == NULL || q->head->next == NULL)return;
    
    list_ele_t *pre = NULL;
    list_ele_t *cur = q->head;
    list_ele_t *post = cur->next;

    list_ele_t *tmp = q->head;
    q->head = q->tail;
    q->tail = tmp;

    while(post){
      cur->next = pre;
      pre = cur;
      cur = post;
      post = post->next; 
    }
    cur->next = pre;

}

