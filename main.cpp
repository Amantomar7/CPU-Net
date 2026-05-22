#include "data_storage.h"

void forward_pass() {

}

void backward_pass() {

}

void train(struct parameters &params, int epochs, float learning_rate) {
    params.mat_1[0][0] = 1;
    std::cout << params.mat_1[0][0] << "\n";
}

void evaluate() {

}

int main() {
    struct parameters p;
    train(p, 10, 0);
    std::cout << p.mat_1[0][0] << "\n";
}

