#ifndef HASH_MAP_HASH_MAP_H
#define HASH_MAP_HASH_MAP_H

#include <utility>

namespace edu { namespace vcccd { namespace vc { namespace csv15 {

    template <class KeyType, class ValueType>
    class HashMap {

        public:
            static constexpr size_t DEFAULT_BUCKET_SIZE = 7;
            HashMap() {
                buckets = new std::pair<KeyType, ValueType>[DEFAULT_BUCKET_SIZE];
                size = DEFAULT_BUCKET_SIZE;
            };

            HashMap(const HashMap &other){
                this->buckets = new std::pair<KeyType, ValueType>[other.size];
                this->size = other.size;
                for (size_t k = 0; k < this->size; k++) {
                    this->buckets[k] = other.buckets[k];
                }
            };

            HashMap(HashMap &&other){
                buckets = other.buckets;
                size = other.size;
            };

            ~HashMap(){
                delete [] buckets;
            };
        private:
            std::pair<KeyType, ValueType> *buckets;
            size_t size;
    };

}}}}
#endif HASH_MAP_HASH_MAP_H