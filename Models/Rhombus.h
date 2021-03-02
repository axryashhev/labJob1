//
// Created by altai on 02.03.2021.
//

#ifndef LABJOB1_RHOMBUS_H
#define LABJOB1_RHOMBUS_H

class Rhombus {
    private: int x_1, y_1, R_1;    //ромб

    public: Rhombus(int x_1, int y_1, int r_1) {
        this->x_1 = x_1;
        this->y_1 = y_1;
        R_1 = r_1;
    }

    public: int getX_1() {
        return x_1;
    }

    public: void setX_1(int x_1) {
        this->x_1 = x_1;
    }

    public: int getY_1() {
        return y_1;
    }

    public: void setY_1(int y_1) {
        this->y_1 = y_1;
    }

    public: int getR_1() {
        return R_1;
    }

    public: void setR_1(int r_1) {
        R_1 = r_1;
    }
}


#endif //LABJOB1_RHOMBUS_H
