#include <iostream>

struct Calculator{
    int number;

    int operator+(Calculator second)const{
        return this->number + second.number;
    };

    int operator-(Calculator second)const{
        return this->number - second.number;
    };

    int operator*(Calculator second)const{
        return this->number * second.number;
    };

    int operator^(Calculator second)const{
        int k = this->number;
        for(int i = 1; i < second.number; i++){
            k = k * this->number;
        }
        return k;
    };

    int operator!()const{
        int k = 1;
        for(int i = 1; i < this->number + 1; i++){
            k = k * i;
        }
        return k;
    }
};

int main() {
    int a,b;
    std::cin>> a >> b;
    Calculator first{a};
    Calculator second{b};
    std::cout << (first*second) << std::endl;
    return 0;
}
