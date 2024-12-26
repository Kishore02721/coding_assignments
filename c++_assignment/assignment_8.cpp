/*This example demonstrates how a deadlock can occur in multithreaded programs
that use synchronization variables. In this example a thread is created that
continually adds a value to a global variable. The thread uses a mutex lock to
protect the global data.The main thread creates the counter thread and then
loops, waiting for user input. When the user presses the Return key, the main 
thread suspends the counter thread and then prints the value of the global 
variable. The main thread prints the value of the global variable under the
protection of a mutex lock.The problem arises in this example when the main 
thread suspends the counter thread while the counter thread is holding the 
mutex lock. After the main thread suspends the counter thread, it tries to 
lock the mutex variable. Since the mutex variable is already held by the 
counter thread, which is suspended, the main thread deadlocks.This example 
may run fine for a while, as long as the counter thread just happens to be 
suspended when it is not holding the mutex lock. The example demonstrates how 
tricky some programming issues can be when you deal with threads.*/

#include <iostream>
#include <thread>
#include <mutex>
#include <atomic>

using namespace std;

mutex protect_global_variable;//mutex to protect global variable
int global_variable = 0;//global variable
atomic<bool> suspend(false);//To simulate suspension
void main_thread();//Function that contains main thread
void counter_thread();//Function that contains counter thread

int main() {
	thread mainThread(main_thread);// Create the main thread
	mainThread.join();//start excuting thread
	return 0;
}

// Main thread function to print global variable on command of user
void main_thread() {

	thread counter(counter_thread);//Create counter thread
	while (true) {
		cout << "Press Enter to suspend counter thread and print global_variable: ";
		cin.get();//wait for user
		suspend.store(true);//To simulate suspending counter thread
		lock_guard<mutex> lock(protect_global_variable);
		cout << "Main thread: global_variable = " << global_variable << endl;
		suspend.store(false);  //To simulate resuming counter thread
		lock_guard<mutex> deadlockLock(protect_global_variable);
	}
	counter.join();  // Wait for the counter thread to finish
}

// Counter thread function to increment global variable
void counter_thread() {

	while (true) {
		lock_guard<mutex> lock(protect_global_variable);//To lock the mutex
		global_variable++;
		//To simulate suspended state by checking the flag
		if (suspend.load()) {
			continue;//if suspend then just be in loop
		}
	}
}
