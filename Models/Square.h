//
// Created by altai on 02.03.2021.
//

#ifndef LABJOB1_SQUARE_H
#define LABJOB1_SQUARE_H

class Square {
    private: int x_2, y_2, R_2;    //ромб

    public: Rhombus(int x_2, int y_2, int r_2) {
        this->x_2 = x_2;
        this->y_2 = y_2;
        R_2 = r_2;
    }

    public: int getX_2() {
        return x_2;
    }

    public: void setX_2(int x_2) {
        this->x_2 = x_2;
    }

    public: int getY_2() {
        return y_2;
    }

    public: void setY_2(int y_2) {
        this->y_2 = y_2;
    }

    public: int getR_2() {
        return R_2;
    }

    public: void setR_2(int r_2) {
        R_2 = r_2;
    }
}

#endif //LABJOB1_SQUARE_H
