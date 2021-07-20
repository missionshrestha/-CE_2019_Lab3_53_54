#include <iostream>
#include "ArrayBST.h"
#include "BST.h"
#include "LinkedBST.h"
using namespace std;

int main()
{
    cout<<"ArrayBST:"<<endl<<endl;
    ArrayBinarySearchTree a;
    int value, option;
    int array_max, array_min;

    do
    {
        cout << "\n\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
        cout << "1. add()" << endl;
        cout << "2. inorder()" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. max()" << endl;
        cout << "5. min()" << endl
             << endl;
        std::cin >> option;
        switch (option)
        {
        case 0:
            cout << "The program exited!" << endl;
            break;

        case 1:
            cout << "Enter the number you want: " << endl;
            std::cin >> value;
            a.add(value, 2);

            break;

        case 2:
            a.inorder();
            break;

        case 3:
            if (a.isEmpty())
            {
                cout << "The tree is empty!" << endl;
            }
            else
            {
                cout << "The tree is not empty" << endl;
            }
            break;

        case 4:
            a.max(array_max);
            cout << "Max: " << array_max << endl;

            break;

        case 5:
            a.min(array_min);
            cout << "Min: " << array_min << endl;
            break;

        default:
            cout << "Enter numbers from options" << endl;
            break;
        }

    } while (option != 0);

    cout<<endl<<endl<<"LinkedBST:"<<endl;


    LinkedBST l;

    l.remove(25);

    l.add(25, 1);
    l.add(30, 1);
    l.add(20, 3);
    l.add(27, 3);
    l.add(33, 3);
    l.add(32, 9);
    l.add(10, 4);
    l.add(24, 4);
    l.add(8, 5);

    l.inorder();
    int max, min;
    l.max(max);
    l.min(min);
    cout << "Min: " << min << "  Max: " << max << endl;
    cout << 10 << ": " << l.exists(10) << endl;
    cout << 99 << ": " << l.exists(99) << endl;
    cout << 35 << ": " << l.exists(35) << endl;
    
    l.inorder();
    l.remove(25);
    l.remove(30);
    l.inorder();
}
