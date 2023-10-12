#pragma once
#include "../PlayerAbstract.h"

/*
template <typename T>

void swap(std::vector<T>& vec, int a, int b);

template <typename T>
int partition(std::vector<T>& vec, int low, int high);
int partitionPlayer(std::vector<PlayerAbstract>& vec, int low, int high);

template <typename T>
void quicksort(std::vector<T>& vec, int low, size_t high);

*/
void swap(std::vector<PlayerAbstract*>& vec, int a, int b);

int partition(std::vector<PlayerAbstract*>& vec, int low, int high);

void quicksort(std::vector<PlayerAbstract*>& vec, int low, int high);