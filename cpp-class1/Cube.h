#pragma once //always present in h files, instructs compiler to only compile code once

class Cube
{
public:
    double getVolume();
    double getSurfaceArea();
    void setLength(double length);

private:
    double length_;
};
