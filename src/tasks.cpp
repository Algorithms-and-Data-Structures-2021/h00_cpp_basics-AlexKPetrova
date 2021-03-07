#include <iostream>   // cout
#include <algorithm>  // copy, fill

#include "tasks.hpp"

// ИСПОЛЬЗОВАНИЕ ЛЮБЫХ ДРУГИХ БИБЛИОТЕК НЕ СОВЕТУЕТСЯ И МОЖЕТ ПОВЛИЯТЬ НА ВАШИ БАЛЛЫ

using std::cout;
using std::fill;
using std::copy;

// Задание 1
void swap_args(int *lhs, int *rhs) {
    if((lhs != nullptr)&(rhs != nullptr)) {
       int khs = *lhs;
       *lhs = *rhs;
       *rhs = khs;
   }
}

// Задание 2
int **allocate_2d_array(int num_rows, int num_cols, int init_value) {

    if((num_rows<=0)|(num_cols<=0)){
        return nullptr;
    }

    int **arr = new int* [num_rows];
    for (int count = 0; count < num_rows; count++){
        arr[count] = new int [num_cols];
    }

    for( int i = 0; i<num_rows;i++){
        for( int j = 0; j<num_cols;j++){
            arr[i][j] = init_value;
        }
    }

    return arr;
}

// Задание 3
bool copy_2d_array(int **arr_2d_source, int **arr_2d_target, int num_rows, int num_cols) {

    if((arr_2d_source == nullptr)|(arr_2d_target == nullptr)|(num_cols<=0)|(num_rows<=0)){
        return false;
    }

    for( int i = 0; i<num_rows; i++){
        for(int j = 0; j<num_cols; j++){
            arr_2d_target[i][j] = arr_2d_source[i][j];
        }
    }
    return true;
}

// Задание 4
void reverse_1d_array(vector<int> &arr) {
    if(arr.empty()){
        return;
    }
    for( int i = 0; i<=arr.size()/2; i++){
        int k = arr[i];
        arr[i] = arr[arr.size()-1-i];
        arr[arr.size()-1-i] = k;
    }
}

// Задание 5
void reverse_1d_array(int *arr_begin, int *arr_end) {

}

// Задание 6
int *find_max_element(int *arr, int size) {
    // напишите код здесь ...
    return nullptr;
}

// Задание 7
vector<int> find_odd_numbers(vector<int> &arr) {
    // напишите код здесь ...
    return {};
}

// Задание 8
vector<int> find_common_elements(vector<int> &arr_a, vector<int> &arr_b) {
    // напишите код здесь ...
    return {};
}
