#pragma once

struct RaggedArray {
	int** data = NULL;
	int rows = 0;
};
void array_allocate_1(RaggedArray& mas); void array_allocate_2(RaggedArray& mas, int new_rows);
void memory_release(RaggedArray mas); void memory_release2(RaggedArray mas_2);
void print_array(RaggedArray mas); void task(RaggedArray mas, int limiter);
void fillPString(RaggedArray mas_2, int limiter, int& new_rows);
void printArrayP(RaggedArray mas_2, int limiter, int& new_rows);
void memoryReleaseP(RaggedArray mas, int new_rows);
void save_in_txt_file(RaggedArray mas, const char* storage_for_txt, int limiter);
void save_in_bin_file(RaggedArray mas, const char* storage_for_bin, int limiter);
void print_txt_file(RaggedArray mas, const char* storage_for_txt, int limiter);
void print_bin_file(RaggedArray mas, const char* storage_for_bin, int limiter);
void addPLine(RaggedArray mas, RaggedArray mas_2, int limiter);
void deletePLine(RaggedArray mas, int limiter);
void shiftLine(RaggedArray mas, RaggedArray mas_2, int limiter);