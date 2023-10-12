#include<iostream>
#include<string>
#include<stdexcept>
#include "List.h"

int main(){
        /*std::cout << "0\n";
        List L;
        std::cout << "1\n";
        L.insertAfter(1);
        std::cout << "2\n";
        L.insertAfter(2);
        L.insertAfter(3);
        std::cout << L;
        std::cout << ("L:" + std::to_string(L.length()) + "c:"+ std::to_string(L.position()) +"\n");

        L.moveNext();
        std::cout << ("Pre:" + std::to_string(L.peekPrev()) + "  Next:" + std::to_string(L.peekNext()) + "\n"  );

        L.moveNext();
        std::cout << ("Pre:" + std::to_string(L.peekPrev()) + "  Next:" + std::to_string(L.peekNext()) + "\n"  );


        L.insertAfter(1);

        std::cout << L;
        L.cleanup();
        std::cout << L;
        std::cout << ("Pre:" + std::to_string(L.peekPrev()) + "  Next:" + std::to_string(L.peekNext()) + "\n"  );


        List B;
        B.insertAfter(4);
        B.insertAfter(5);
        B.insertAfter(6);

        List C = L.concat(B);

        std::cout << C;

        List A,B;
        printf("size:%d\n", A.length());
        std::cout << A;
        List C;
        A.insertAfter(1);
        A.insertAfter(2);
        A.insertAfter(3);
        B.insertAfter(4);
        B.insertAfter(5);
        B.insertAfter(6);
        printf("done inserting\n");
        C = A.concat(B);
        printf("all done\n");
        */
        List A;
    printf("Len:%d C:%d\n",A.length(), A.position());
         A.insertAfter(77);
    printf("Len:%d C:%d\n",A.length(), A.position());
      A.insertAfter(55);
        A.insertAfter(1);
    printf("Len:%d C:%d\n",A.length(), A.position());
    A.insertAfter(34);
    A.insertAfter(1);
    A.insertAfter(77);
    A.insertAfter(77);
    printf("Len:%d C:%d\n",A.length(), A.position());
    A.insertAfter(34);
    if (A.findNext(99) != -1)
      std::cout << "failed 1\n";
    if (A.position() != A.length())
        std::cout << "failed 2\n";

    A.moveFront();
    if (A.findNext(1) != 4)
        std::cout << "failed 3\n";
    if (A.findNext(1) != 6)
        std::cout << "failed 4\n";
    if (A.findNext(1) != -1)
        std::cout << "failed 5\n";

    A.moveFront();
    A.cleanup();
    if (A.findNext(1) != 3)
        std::cout << "failed 6\n";
    if (A.findNext(1) != -1)
        std::cout << "failed 7\n";
    return 0;
        return 0;
}
