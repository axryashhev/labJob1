//
// Created by altai on 02.03.2021.
//

#ifndef LABJOB1_TRIANGLE_H
#define LABJOB1_TRIANGLE_H


class Triangle {
    private: int x, y, R;

    public: Triangle(int x, int y, int R) {
        this->x = x;
        this->y = y;
        this->R = R;
    }

    public: Triangle() {
        this->x = 100;
        this->y = 100;
        this->R = 50;
    }

    public: int getX() {
        return x;
    }

    public: void setX(int x) {
        this->x = x;
    }

    public: int getY() {
        return y;
    }

    public: void setY(int y) {
        this->y = y;
    }

    public: int getR() {
        return R;
    }

    public: void setR(int r) {
        R = r;
    }

};


#endif //LABJOB1_TRIANGLE_H
