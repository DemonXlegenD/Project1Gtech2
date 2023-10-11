#include "QuickSort.h"
/*
template <typename T>
void swap(std::vector<T>& vec, int a, int b) {
	T temp = vec[a];
	vec[a] = vec[b];
	vec[b] = temp;
}

template <typename T>
// Fonction pour partitionner le vecteur en utilisant le premier élément comme pivot
int partition(std::vector<T>& vec, int low, int high) {
	T pivot = vec[low];
	int i = low + 1;

	for (int j = low + 1; j <= high; j++) {
		if (vec[j] < pivot) {
			swap(vec, i, j);
			i++;
		}
	}

	swap(vec, low, i - 1);
	return i - 1;
}

int partitionPlayer(std::vector<PlayerAbstract>& vec, int low, int high) {
	PlayerAbstract pivot = vec[low];
	int i = low + 1;

	for (int j = low + 1; j <= high; j++) {
		if (vec[j].getActualSpeed() < pivot.getActualSpeed()) {
			swap(vec, i, j);
			i++;
		}
	}

	swap(vec, low, i - 1);
	return i - 1;
}

template <typename T>
// Fonction de tri rapide récursive
void quicksort(std::vector<T>& vec, int low, size_t high) {
	if (low < high) {
		int pivotIndex;
		if (std::is_same<T, PlayerAbstract>::value) {
			pivotIndex = partitionPlayer(vec, low, high);
		}
		else {
			pivotIndex = partition(vec, low, high);
		}
		quicksort(vec, low, pivotIndex - 1);
		quicksort(vec, pivotIndex + 1, high);
	}
}

Severity	Code	Description	Project	File	Line	Suppression State
Error	LNK2019	unresolved external symbol "void __cdecl quicksort<class PlayerAbstract>(class std::vector<class PlayerAbstract,class std::allocator<class PlayerAbstract> > &,int,unsigned __int64)" (??$quicksort@VPlayerAbstract@@@@YAXAEAV?$vector@VPlayerAbstract@@V?$allocator@VPlayerAbstract@@@std@@@std@@H_K@Z) referenced in function "public: class std::vector<class PlayerAbstract,class std::allocator<class PlayerAbstract> > __cdecl GameConfig::getPlayers(void)" (?getPlayers@GameConfig@@QEAA?AV?$vector@VPlayerAbstract@@V?$allocator@VPlayerAbstract@@@std@@@std@@XZ)	PROJECT 1	C:\Users\33673\gtech_2eme_annee\PROJECT 1\PROJECT 1\GameConfig.obj	1

*/

void swap(std::vector< PlayerAbstract>& vec, int a, int b) {
	PlayerAbstract temp = vec[a];
	vec[a] = vec[b];
	vec[b] = temp;
}

// Fonction pour partitionner le vecteur en utilisant le premier élément comme pivot
int partition(std::vector<PlayerAbstract>& vec, int low, int high) {
	PlayerAbstract pivot = vec[low];
	int i = low + 1;

	for (int j = low + 1; j <= high; j++) {
		if (vec[j].getActualSpeed() < pivot.getActualSpeed()) {
			swap(vec, i, j);
			i++;
		}
	}

	swap(vec, low, i - 1);
	return i - 1;
}


// Fonction de tri rapide récursive
void quicksort(std::vector<PlayerAbstract>& vec, int low, size_t high) {
	if (low < high) {
		int pivotIndex = partition(vec, low, high);
	
		quicksort(vec, low, pivotIndex - 1);
		quicksort(vec, pivotIndex + 1, high);
	}
}