/* Insertion can perform rear or tail
Deletion can perform on head or front 
any side can be front or rear but the above 
condition always be consider as a base 
insertion in queue is enqueue
deletion in queue is caller dequeue
time complexity O(n)
Element can be inserted at one end
and delete an element from other end.
eg-: A queue data structure allows insertion only at the end and deletion from the front. This is like a queue in real life, wherein people 
are removed from the front and added at the back
Achive by two ways
1)linked list
2) Array base
*/
#include<iostream>
using namespace std;
int queue[100], n = 100, front = - 1, rear = - 1;
void Insert() {
   int val;
   if (rear == n - 1)
      cout<<"Queue Overflow"<<endl;
   else {
      if (front == - 1)
      front = 0;
      cout<<"Insert the element in queue : "<<endl;
      cin>>val;
      rear++;
      queue[rear] = val;
   }
}
void Delete() {
   if (front == - 1 || front > rear) {
      cout<<"Queue Underflow ";
   return ;
   } else {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;
   }
}
void Display() {
   if (front == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = front; i <= rear; i++)
         cout<<queue[i]<<" ";
      cout<<endl;
   }
}
int main()
{
	int ch;
	cout<<"Press the number \n <1> Insert \n <2> Delete \n <3> Display \n <4> Exit\n"<<endl;
do {
   cout<<"Enter your choice : "<<endl;
   cin>>ch;
   switch (ch) {
      case 1: Insert();
         break;
      case 2: Delete();
         break;
      case 3: Display();
         break;
      case 4: cout<<"Exit"<<endl;
         break;
      default: cout<<"Invalid choice"<<endl;
   }
} while(ch!=4);
   return 0;
}



