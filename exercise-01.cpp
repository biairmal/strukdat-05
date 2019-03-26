/*
Nama	: Bandana Irmal Abdillah
NPM		: 140810180025
Kelas	: A
Tanggal	: 26 Maret 2019
*/

#include <iostream>
using namespace std;

struct Pembalap {
   int nomor;
   char nama;
   int waktu;
   Pembalap* next;
   Pembalap* prev;
};


void createNode(Pembalap* &p, int nomor, char nama){
    p = new Pembalap;
    cout << "No  : "; p->nomor = nomor;
    cout << "Nama  : "; p->nama = nama;
    cout << "Waktu  : "; cin >> p->waktu;
    p->next = 0;
    p->prev = 0;
}

void insertFirst(Pembalap* &head, Pembalap* node){
    if (head == 0) {
        head = node;
    } else {
        node->next = head;
        head->prev = node;
        head = node;
    }
}

// insert before a node
void insertBefore(Pembalap *&head, int nomorKey, Pembalap *node){

}   

// delete a node that have the key
void deleteByKey(Pembalap *&head, int nomorKey, Pembalap *&deletedNode){

}

void search(Pembalap *&firstNode, int nomorKey, Pembalap *&pToUpdate){
    
}

void traversal(Pembalap *head){
    Pembalap* pBantu;
    pBantu = head;
    if (head == 0) { 
        cout << "DATA KOSONG!" << endl;
    } else {
        while(pBantu != 0){
            cout << pBantu->nomor << "\t" << pBantu->nama << "\t" << pBantu->waktu << endl;
            pBantu = pBantu->next;
        }
        cout << endl;
    }
}

// sorting ascending
void sortingByNomor(Pembalap *&head){

}

// update Pembalap from user input
void update(Pembalap *firstNode, int nomorKey){
    
}

int main()
{
    Pembalap *head = 0;
    Pembalap *pBaru = 0;
    Pembalap *pToUpdate = 0;
    char nama = 'a';

    for (int i = 0; i < 4; i++)
    {
        createNode(pBaru, i + 1, nama++);
        insertFirst(head, pBaru);
    }

    cout << "\n>>> List" << endl;
    traversal(head);

    int keyNomor = 2;

    cout << "\n>>> Insert Before nomor " << keyNomor << endl;
    createNode(pBaru, 99, 'z');
    insertBefore(head, keyNomor, pBaru);
    traversal(head);

    cout << "\n>>> SortingByNomor" << endl;
    sortingByNomor(head);
    traversal(head);

    keyNomor = 3;
    cout << "\n>>> Delete nomor " << keyNomor << endl;
    Pembalap *pHapus = NULL;
    deleteByKey(head, keyNomor, pHapus);
    traversal(head);

    keyNomor = 4;
    cout << "\n>>> Update nomor " << keyNomor << endl;
    update(head, keyNomor);

    cout << "\n>>> Updated list\n";
    traversal(head);
}
