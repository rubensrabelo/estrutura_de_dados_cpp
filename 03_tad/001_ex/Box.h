// Arquivo box
#ifndef BOX_H
#define BOX_H

class Box {
    private:
        double length {1.0};
        double width {1.0};
        double height {1.0};

    public:
        Box() = default;
        Box(double lv, double wv, double hv);
        double volume() const;
};

Box::Box(double lv, double wv, double hv): length {lv}, width {wv}, height {hv} {
}

double Box::volume() const {
    return length * width * height;
}

#endif