#include <iostream>
#include <queue>

using namespace std;

int main() {
   queue<int> myQueue;

   myQueue.push(10);
   myQueue.push(20);
   myQueue.push(30);

   cout << "Queue size is: " << myQueue.size() << endl;
   cout << "Front element is: " << myQueue.front() << endl;
   cout << "Back element is: " << myQueue.back() << endl;

   cout << "Elements in the queue are: ";
   while (!myQueue.empty()) {
      cout << myQueue.front() << " ";
      myQueue.pop();
   }
   cout << endl;

   return 0;
}
