// Arquivo box
#ifndef BOX_H
#define BOX_H

class Box {
    private:
        double length {1.0};
        double width {1.0};
        double height {1.0};

    public:
        Box();
        Box(double lv, double wv, double hv);
        ~Box();

        double volume() const;
};

#endif