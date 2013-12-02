#ifndef VECTOR_HPP
#define VECTOR_HPP

//==================================================================================================
template<typename T> class CVector {
public:
    T x, y;

    CVector() : x(0), y(0) {}
    CVector(T inX, T inY) : x(inX), y(inY) {}

    void set(T inX, T inY) { x = inX; y = inY; }
};
//==================================================================================================

#endif
