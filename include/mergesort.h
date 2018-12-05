/**
 * CS V15 Data Structures and Algorithms
 * CRN: 70342
 * Assignment: ex04-mergesort
 *
 * Statement of code ownership: I hereby state that I have written all of this
 * code and I have not copied this code from any other person or source.
 *
 * Got this from Alden Smith
 * author Efrain Santiago
 */

#ifndef EX04_MERGESORT_MERGESORT_H
#define EX04_MERGESORT_MERGESORT_H
#include <cstdlib>
#include <iostream>

namespace edu { namespace vcccd { namespace vc { namespace csv15 { using std::distance;
                template<typename T>
                void _merge(T lo[], T hi[], size_t loSize, size_t hiSize) {
                    size_t size = (loSize + hiSize);
                    T * temp = new T[size];
                    T *loPtr = lo, *hiPtr = hi, *t = temp;
                    while((distance(lo, loPtr) < loSize) && (distance(hi, hiPtr) < hiSize))
                        if(*loPtr > *hiPtr){
                            *t++ = *hiPtr++;
                        }
                        else{
                            *t++ = *loPtr++;
                        }

                    while (distance(lo, loPtr) < loSize) *t++ = *loPtr++;
                    while (distance(hi, hiPtr) < hiSize) *t++ = *hiPtr++;

                    for(loPtr = lo, t = temp; distance(lo, loPtr) < size; *loPtr++ = *t++);
                }

                template<typename T>
                void mergesort(T array[], size_t size) {
                    if (size == 1) return;
                    size_t half = size / 2;

                    mergesort(array, half);
                    mergesort(array + half, size - half);
                    _merge(array, array + half, half, size - half);
                }
            }}}}
//test
#endif //EX04_MERGESORT_MERGESORT_H
