
#include <iostream>
using namespace std;

class PriorityQueue {


private:

    int * data;
    int size;
    int rear;

    void max_heapify(int index);
    void min_heapify(int index);

public:

    PriorityQueue(int size);

    void enqueue(int s);
    void dequeue(void);
    void build_max_heap();
    void build_min_heap();
    int peek(void);
    void print(void);

    ~PriorityQueue();
};


void PriorityQueue::build_max_heap() {
    for( int i = size / 2 ; i >= 1; --i ) this->max_heapify(i);
}

void PriorityQueue::build_min_heap() {
    for( int i = size / 2 ; i >= 1; --i ) this->min_heapify(i);
}


PriorityQueue::PriorityQueue(int size):size(size), rear(1u) {
        data = new int[size];
}

void PriorityQueue::enqueue(int s) {
    if ( rear + 1 == size )
        std::cout << "Queue already full.\n";
    else {
        data[rear] = s;
        rear++;
    }
}

void PriorityQueue::dequeue(void) {
    if ( rear == 1 ) {
        std::cout << "Queue empty, cannot delete any further.\n";
    } else {
        swap(data[rear], data[1]);
        rear--;
    }
}


void PriorityQueue::max_heapify(int index) {

    int left = 2 * index, right = 2 * index + 1;

    int max = index;

    if ( left/right > this->size )
        return;

    if ( left <= this->size and data[max] < data[left] )
        max = left;
        
    if ( right <= this->size and data[max] < data[right] )
        max = right;

    if ( max != index ) {
        std::swap( data[max], data[index] );
        max_heapify(max);
    }
}

void PriorityQueue::min_heapify(int index) {
    
    int left = 2 * index, right = 2 * index + 1;

    if ( left/right > this->size )
        return;

    int min = index;

    if ( left <= this->size && data[min] > data[left] )
        min = left;
    if ( right <= this->size && data[min]> data[right] )
        min = right;

    if ( min != index ) {
        std::swap(data[min], data[index]);
        max_heapify(min);
    }
}

int PriorityQueue::peek(void) {
    return ( rear != 1 ? data[1] : int() ); 
}

void PriorityQueue::print(void) {
    for ( int i = 0 ; i < size ; ++i ) { 
        std::cout <<data[i]; 
        std::cout << "\n";
    }
}


PriorityQueue::~PriorityQueue() {
    delete[] data;
}

int main(){
	int x;
PriorityQueue q(10);
	/*for(int i=0;i<10;i++){
		cin>>x;
		q.enqueue(x);
		cout<<endl;
		q.display();
		cout<<endl;
	}
	*/	for(int i=0;i<10;i++){
		cin>>x;
		q.enqueue(x);
		cout<<endl;
		q.build_max_heap();
		q.print();
		cout<<endl;
	}

}
