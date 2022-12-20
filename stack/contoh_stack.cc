#include <iostream>
#include <queue>
using namespace std;

// utility function to display stack elements
void display_queue(queue<string> st) {

  while(!st.empty()) {
    cout << st.front() << ", ";
    st.pop();
  }

  cout << endl;
}

int main() {

  // create a stack of strings
  queue<string> colors;

  // push elements into the stack
  colors.push("Red");
  colors.push("Orange");
  colors.push("Blue");
  
  cout << "Initial Stack: ";
  // print elements of stack
  display_queue(colors);
  
  // removes "Blue" as it was inserted last
  colors.pop();
  
  cout << "Final Stack: ";

  // print elements of stack
  display_queue(colors);
  
  return 0;
}
