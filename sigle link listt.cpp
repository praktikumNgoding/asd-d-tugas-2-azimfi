// sigle link listt.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include<iostream>
using namespace std;
struct Node {
	int data;
	Node *next;
};
class LinkedList {
public:
	Node *Head;
	Node *Tail;

	void infirst(int x) {
		Node *baru = new Node();
		Head = baru;
		Tail = baru;
		baru->data = x;
		baru->next = NULL;
	}
	void depan(int x) {
		Node *baru = new Node();
		baru->data = x;
		baru->next = Head;
		Head = baru;
	}
	void belakang(int x) {
		Node *baru = new Node();
		Node *tukar = new Node();
		tukar = Tail;
		baru->data = x;
		tukar->next = baru;
		baru->next = NULL;
		Tail = baru;
	}
	void set(int x, int y) {
		Node *baru = new Node();
		Node *after = new Node();
		after = Head;
		baru->data = x;
		while (after->data != y) {
			after = after->next;
		}
		baru->next = after->next;
		after->next = baru;
	}
	void seb(int x, int y) {
		Node *baru = new Node();
		Node *before = new Node();
		Node *prevbefore = new Node();
		before = Head;
		baru->data = x;
		while (before->data != y) {
			prevbefore = before;
			before = before->next;
		}
		prevbefore->next = baru;
		baru->next = before;
	}
	void hapusdepan() {
		Node *hapus = new Node();
		hapus = Head;
		Head = Head->next;
		delete hapus;
	}
	void hapusbelakang() {
		Node *hapus = new Node();
		Node *cari = new Node();
		hapus = Head;
		while (hapus != Tail) {
			cari = hapus;
			hapus = hapus->next;
		}
		cari->next = NULL;
		cari = Tail;
		delete hapus;
	}
	void hapussesuatu(int x) {
		Node *hapus = new Node();
		Node *cari = new Node();
		hapus = Head;
		while (hapus->data != x) {
			cari = hapus;
			hapus = hapus->next;
		}
		cari->next = hapus->next;
		delete hapus;
	}
	void print() {
		Node *baru = new Node();
		baru = Head;
		while (baru != NULL) {
			cout << baru->data << " -> ";
			baru = baru->next;
		}
		if (baru == NULL) {
			cout << "NULL";
		}
		cout << endl;
	}
};
int main() {
	LinkedList list;
	list.infirst(20);
	list.print();
	list.depan(30);
	list.print();
	list.belakang(50);
	list.print();
	list.set(55, 30);
	list.print();
	list.seb(22, 50);
	list.print();
	list.hapusdepan();
	list.print();
	list.hapusbelakang();
	list.print();
	list.hapussesuatu(20);
	list.print();
}
