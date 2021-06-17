#ifndef SORTING_H
#define SORTING_H


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

void recursive_quick_sort(int *array, size_t size, int start, int end);
size_t partition(int *array, size_t size, int start, int end);
void swap_int1(int *array, int a, int b);
void swap_ints(int *a, int *b);
#endif
