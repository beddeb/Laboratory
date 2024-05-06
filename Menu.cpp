#include <iostream>
#include "UnitTests.h"

using namespace std;

template<typename Type>
void Show_Table_Massive(MutableListSequence<Sequence<Type> *> const &TableMassive) {
    for (int i = 0; i < TableMassive.GetLength(); i++) {
        MutableListSequence<Type> *mut = dynamic_cast<MutableListSequence<Type> *>(TableMassive.GetIndex(i));
        if (mut != 0)
            printf("array %d MutableListSequence\n", i);
        ImmutableListSequence<Type> *immut = dynamic_cast<ImmutableListSequence<Type> *>(TableMassive.GetIndex(i));
        if (immut != 0)
            printf("array %d ImmutableListSequence\n", i);
        ArraySequence<Type> *arr = dynamic_cast<ArraySequence<Type> *>(TableMassive.GetIndex(i));
        if (arr != 0)
            printf("array %d ArraySequence\n", i);
        TableMassive.GetIndex(i)->Print();
    }
}

template<typename Type>
void User() {
    int opr = 1;
    MutableListSequence<Sequence<Type> *> TableMassive;
    while (opr) {

        cout << "\n\nChose action:\n"
                "-1. Unitmodule test\n"
                "1. Get element index \n"
                "2. Get length \n"
                "3. Add element in start \n"
                "4. Add element in finish \n"
                "5. Get subsequence \n"
                "6. Union list of elements \n"
                "7. Create MutableListSequence \n"
                "8. Create ImmutableListSequence \n"
                "9. Create ArraySequence \n"
                "10. Delete element index \n"
                "0. EXIT\n" << endl;
        Show_Table_Massive(TableMassive);
        int flag = -1;
        do {
            flag = inpint(&opr);
        } while (flag == -1 || opr < -1 || opr > 10);
        switch (opr) {
            case -1: {
                test_module();
                exit(0);
            }
            case 1: {
                if (TableMassive.GetLength() == 0) {
                    printf("List of arrays is empty\n");
                    break;
                }
                printf("Choose array\n");
                int n = 0, flag = -1;
                do {
                    flag = inpint(&n);
                } while (flag == -1 || n >= TableMassive.GetLength());
                flag = -1;
                int index = 0;
                printf("Enter number of element\n");
                do {
                    flag = inpint(&index);
                } while (flag == -1 || index >= (TableMassive.GetIndex(n))->GetLength());
                Print(TableMassive.GetIndex(n)->GetIndex(index));
            }
                break;
            case 2: {
                if (TableMassive.GetLength() == 0) {
                    printf("List of arrays is empty\n");
                    break;
                }
                printf("Choose array\n");
                int n = 0, flag = -1;
                do {
                    flag = inpint(&n);
                } while (flag == -1 || n >= TableMassive.GetLength());
                std::cout << "size is " << TableMassive.GetIndex(n)->GetLength() << std::endl;
            }
                break;
            case 3: {
                if (TableMassive.GetLength() == 0) {
                    printf("List of arrays is empty\n");
                    break;
                }
                printf("Choose array\n");
                int n = 0, flag = -1;
                do {
                    flag = inpint(&n);
                } while (flag == -1 || n >= TableMassive.GetLength());
                printf("Enter number of element\n");
                Type elem;
                //std:: cin >> elem;
                Scanf(&elem);
                Sequence<Type> *ptr = TableMassive.GetIndex(n)->Prepend(elem);
                ptr->Print();
            }
                break;
            case 4: {
                if (TableMassive.GetLength() == 0) {
                    printf("List of arrays is empty\n");
                    break;
                }
                printf("Choose array\n");
                int n = 0, flag = -1;
                do {
                    flag = inpint(&n);
                } while (flag == -1 || n >= TableMassive.GetLength());
                printf("Enter number of element\n");
                Type elem;
                Scanf(&elem);
                Sequence<Type> *ptr = TableMassive.GetIndex(n)->Append(elem);
                ptr->Print();
            }
                break;
            case 5: {
                if (TableMassive.GetLength() == 0) {
                    printf("List of arrays is empty\n");
                    break;
                }
                printf("Choose array\n");
                int n = 0, flag = -1;
                do {
                    flag = inpint(&n);
                } while (flag == -1 || n >= TableMassive.GetLength());
                printf("Enter number of new left line\n");
                int left = 0;
                flag = -1;
                do {
                    flag = inpint(&left);
                } while (flag == -1 || left < 0);
                printf("Enter number of new right line\n");
                int right = 0;
                flag = -1;
                do {
                    flag = inpint(&right);
                } while (flag == -1 || right > TableMassive.GetIndex(n)->GetLength());
                Sequence<Type> *ptr;
                try {
                    ptr = TableMassive.GetIndex(n)->GetSubsequence(left, right);
                    ptr->Print();
                }
                catch (char const *str) {
                    cout << str;
                }
            }
                break;
            case 6: {
                if (TableMassive.GetLength() < 2) {
                    printf("It's less than 2 arrays\n");
                    break;
                }
                printf("Choose array to add new elements\n");
                int mas1 = 0, flag = -1;
                do {
                    flag = inpint(&mas1);
                } while (flag == -1 || mas1 >= TableMassive.GetLength());
                printf("Choose array where elements should be copy\n");
                int mas2 = 0;
                flag = -1;
                do {
                    flag = inpint(&mas2);
                } while (flag == -1 || mas2 >= TableMassive.GetLength());
                Sequence<Type> *ptr;

                ptr = TableMassive.GetIndex(mas1)->Concat(TableMassive.GetIndex(mas2));
                ptr->Print();
            }
                break;
            case 7: {
                printf("Enter size of array\n");
                int size = 0, flag = -1;
                do {
                    flag = inpint(&size);
                } while (flag == -1);
                Type array[size];
                printf("Enter %d elements\n", size);
                for (int i = 0; i < size; i++) {
                    Scanf(&array[i]);
                }
                TableMassive.Append(new MutableListSequence(array, size));
            }
                break;
            case 8: {
                printf("Enter size of array\n");
                int size = 0, flag = -1;
                do {
                    flag = inpint(&size);
                } while (flag == -1);
                Type array[size];
                printf("Enter %d elements\n", size);
                for (int i = 0; i < size; i++) {
                    //std:: cin >> array[i];
                    Scanf(&array[i]);
                }
                TableMassive.Append(new ImmutableListSequence(array, size));
            }
                break;
            case 9: {
                printf("Enter size of array\n");
                int size = 0, flag = -1;
                do {
                    flag = inpint(&size);
                } while (flag == -1);
                Type array[size];
                printf("Enter %d elements\n", size);
                for (int i = 0; i < size; i++) {
                    Scanf(&array[i]);
                }
                TableMassive.Append(new ArraySequence(array, size));
            }
                break;
            case 10: {
                if (TableMassive.GetLength() == 0) {
                    printf("List of arrays is empty\n");
                    break;
                }

                printf("Choose array\n");
                int n = 0, flag = -1;
                do {
                    flag = inpint(&n);
                } while (flag == -1 || n >= TableMassive.GetLength());
                if (TableMassive.GetIndex(n)->GetLength() == 0) {
                    printf("Array is empty\n");
                    break;
                }
                printf("Choose number of element to delete\n");
                int index = 0;
                flag = -1;
                do {
                    flag = inpint(&index);
                } while (flag == -1 || index >= TableMassive.GetIndex(n)->GetLength() || index < 0);
                Sequence<Type> *ptr = TableMassive.GetIndex(n)->DeleteIndex(index);
                ptr->Print();
            }

            default:
                break;
        }
    }
}