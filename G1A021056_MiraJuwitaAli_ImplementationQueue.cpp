#include <iostream>
using namespace std;

struct Queue {
	int head; 
	int tail; 
	int data[MAX];
}
Q;

// antrian penuh
bool isFull() {
	return Q.tail == MAX;
}

// antrian kosong
bool isEmpty() {
	return Q.tail == 0;
}

// menampilkan queue
void printQueue() {
	if (isEmpty()) {
    cout << "Antrian kosong"<<endl;
	}
	else {
		cout << "Queue : ";
		for (int i = Q.head; i < Q.tail; i++)
			cout << Q.data[i] << ((Q.tail-1 == i) ? "" : ",");
		cout << endl;
  }
}

// menambahkan data ke queue
void enqueue() {
	if (isFull())
	{
		cout << "Antrian penuh!"<<endl;
	}
	else {
		int data;
		cout << "Masukkan Data : ";cin >> data;
		Q.data[Q.tail] = data;
		Q.tail++;
		cout << "Data telah ditambahkan\n";
		printQueue();
	}
}

// mengambil data dari queue
void dequeue() {
	if (isEmpty())
	{
		cout << "Antrian masih kosong"<<endl;
	}
	else{
		cout << "Mengambil data \"" << Q.data[Q.head] << "\"..." << endl;
		for (int i = Q.head; i < Q.tail; i++)
			Q.data[i] = Q.data[i + 1];
		Q.tail--;
		printQueue();
	}
}

int main() {
	int choose;
	do
	{
		cout << "Menu Queue \n"
		   	<< " 1. Menambahkan Data Ke Antrian \n"
			<< " 2. Mengambil Data Dari Antrian \n"
			<< " 3. Keluar \n\n"
			<< "Masukkan pilihan anda : "; cin >> choose;
		switch (choose)
		{
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		default:
			cout << "Pilihan tidak ada";
			break;
		}
	} while (choose !=3);
	return 0;
}
