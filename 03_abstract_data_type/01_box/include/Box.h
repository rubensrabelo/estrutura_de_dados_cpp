#ifndef BOX_H
#define BOX_H

class Box {
    private:
        double length;
        double width;
        double height;
    
    public:
        Box(double length, double width, double height);
        double volume(); 
};

#endif