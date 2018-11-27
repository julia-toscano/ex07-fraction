//
// Created by vscilab on 10/25/2018.
//
#include <iostream>
#include "fraction.h"
namespace edu { namespace vcccd { namespace vc { namespace csv13 {
                int32_t Fraction::getNumerator() const {
                    return numerator;

                }

                int32_t Fraction::getDenominator() const {
                    return denominator;
                }

                void Fraction::setNumerator(const int32_t &numerator) {
                    this->numerator = numerator;
                }

                void Fraction::setDenominator(const int32_t &denominator) {
                    this->denominator = denominator;
                }

                void Fraction::output() {
                    std::cout << numerator << " / " << denominator;
                }
            }}}}