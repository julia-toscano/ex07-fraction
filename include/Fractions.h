//
// Created by vscilab on 10/25/2018.
//Now we have a class that has some data hiding.

#ifndef HASH_TABLE_FRACTIONS_H
#define HASH_TABLE_FRACTIONS_H

#include <cstdint>
class Fraction {
public:
    Fraction(int32_t numerator, int32_t denominator) { //implementing the constructor
        this->numerator = numerator;
        this->denominator = denominator;
    }
public:
    int32_t getNumerator() const; //when you return the numerator your not going to change anything..."const"
    int32_t getDenominator() const;
double getRealValue()const;

void setNumerator(const int32_t &numerator);
void setDenominator(const int32_t &denominator);
//not const because we're going to change the value of the numerator

void output();
private:
     int32_t numerator;
     int32_t denominator;
};
#endif //FRACTION_FRACTIONS_if