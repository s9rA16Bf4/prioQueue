# PrioQueue
An easy and template based implementation of prioQueue

## How to use ##
1) Include the .hpp in your project and import it
2) Once you have created a class object, there are three functions you can use.<br/>
  2.1) insert(element) to load the internal vector with the values you want to queue <br/>
  2.2) deleteMin() To get the element with the lowest value, this also removes that element from the queue<br/>
  2.3) isEmpty() Returns true if the internal vector is empty else false<br/>
  
3) It's important that the elements you enqueue are comparable, else the code will not work<br/>

## Example on a prioQueue sorting algorithm ##
```
int main(){
  prioQueue<int> pq;
  std::vector<int> unsorted = {27,34,21,56,38,13,45,6,14,33,84,12};

  for (int e:unsorted){ pq.insert(e); }

  int vecSize = unsorted.size();
  unsorted.clear();

  while(vecSize > 0){
    unsorted.push_back(pq.deleteMin());
    vecSize--;
  }


  for (int i:unsorted){
    std::cout << i << std::endl;
  }
}
```
If there is any issue, open up a ticket and I will take a look at it
