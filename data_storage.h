#include <iostream>

const int rlayer_1 = 728;
const int clayer_1 = 512;

const int rlayer_2 = 512;
const int clayer_2 = 256;

const int rlayer_3 = 256;
const int clayer_3 = 64;

const int rlayer_4 = 64;
const int clayer_4 = 10;

const int feature_size = 728;
const int train_data_size = 50000;
const int val_data_size = 10000;

struct parameters{
    float mat_1[rlayer_1][clayer_1];
    float mat_2[rlayer_2][clayer_2];
    float mat_3[rlayer_3][clayer_3];
    float mat_4[rlayer_4][clayer_4];
};

struct data{
    float train_data[train_data_size][feature_size];
    float val_data[val_data_size][feature_size];
};