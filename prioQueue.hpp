#ifndef PRIOQUEUE_HPP
#define PRIOQUEUE_HPP

#include <vector>

template<typename T>
class prioQueue{
private:
  std::vector<T> internalVector; // This will hold our unsorted and hopefully sorted list

public:
  void insert(T element); // Adds an element to the queue
  T deleteMin(); // Removes and returns the element with the lowest value
  bool isEmpty();
};

template<typename T>
void prioQueue<T>::insert(T element){ this->internalVector.push_back(element); }

template<typename T>
bool prioQueue<T>::isEmpty(){ return this->internalVector.empty(); }

template<typename T>
T prioQueue<T>::deleteMin(){
  T lowestValue = T();
  int index = 0;

  for (unsigned int i = 0; i < this->internalVector.size(); i++){
    if (this->internalVector[i] < lowestValue || lowestValue == T()){
      lowestValue = this->internalVector[i];
      index = i;
    }
  }

  this->internalVector.erase(this->internalVector.begin()+index);

  return lowestValue;
}

#endif
