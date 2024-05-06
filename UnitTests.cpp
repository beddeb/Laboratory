#include <cassert>
#include "UnitTests.h"

using namespace std;

void TestGetSubsequence() {
    {
        int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
        int arr2[5] = {1, 2, 3, 4, 5};
        int arr3[1] = {1};
        int arr4[1] = {15};
        int arr5[3] = {7, 8, 9};
        Sequence<int> *seq = new ImmutableListSequence<int>(arr, 10);
        Sequence<int> *seq_curr;
        Sequence<int> *seq2 = new ImmutableListSequence<int>(arr2, 5);
        Sequence<int> *seq3 = new ImmutableListSequence<int>(arr3, 1);
        Sequence<int> *seq4 = new ImmutableListSequence<int>(arr4, 1);
        Sequence<int> *seq5 = new ImmutableListSequence<int>(arr5, 3);
        seq_curr = seq->GetSubsequence(0, 6);
        seq_curr->GetLength();
        seq_curr->Append(6);
        seq2 = seq->GetSubsequence(0, 6);
        assert(seq2->is_equal(seq_curr));
        seq_curr = seq->GetSubsequence(0, 0);
        assert(seq3->is_equal(seq_curr));
        seq_curr = seq->GetSubsequence(9, 9);
        assert(seq4->is_equal(seq_curr));
        seq_curr = seq->GetSubsequence(6, 8);
        assert(seq5->is_equal(seq_curr));
    }
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
    int arr2[5] = {1, 2, 3, 4, 5};
    int arr3[1] = {1};
    int arr4[1] = {15};
    int arr5[3] = {7, 8, 9};
    Sequence<int> *seq = new ArraySequence<int>(arr, 10);
    Sequence<int> *seq_curr;
    Sequence<int> *seq2 = new ArraySequence<int>(arr2, 5);
    Sequence<int> *seq3 = new ArraySequence<int>(arr3, 1);
    Sequence<int> *seq4 = new ArraySequence<int>(arr4, 1);
    Sequence<int> *seq5 = new ArraySequence<int>(arr5, 3);
    seq_curr = seq->GetSubsequence(0, 6);
    seq_curr->GetLength();
    seq_curr->Append(6);
    seq2 = seq->GetSubsequence(0, 6);
    assert(seq2->is_equal(seq_curr));
    seq_curr = seq->GetSubsequence(0, 0);
    assert(seq3->is_equal(seq_curr));
    seq_curr = seq->GetSubsequence(9, 9);
    assert(seq4->is_equal(seq_curr));
    seq_curr = seq->GetSubsequence(6, 8);
    assert(seq5->is_equal(seq_curr));
}

void TestGetFirst() {
    {
        int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
        int arr2[5] = {1, 2, 3, 4, 5};
        int arr3[1] = {1};
        int arr4[1] = {15};
        int arr5[3] = {7, 8, 9};
        Sequence<int> *seq = new ImmutableListSequence<int>(arr, 10);
        Sequence<int> *seq_curr;
        Sequence<int> *seq2 = new ImmutableListSequence<int>(arr2, 5);
        Sequence<int> *seq3 = new ImmutableListSequence<int>(arr3, 1);
        Sequence<int> *seq4 = new ImmutableListSequence<int>(arr4, 1);
        Sequence<int> *seq5 = new ImmutableListSequence<int>(arr5, 3);

        assert(1 == seq->GetFirst());
        assert(1 == seq2->GetFirst());
        assert(1 == seq3->GetFirst());
        assert(15 == seq4->GetFirst());
        assert(7 == seq5->GetFirst());
    }
    {
        int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
        int arr2[5] = {1, 2, 3, 4, 5};
        int arr3[1] = {1};
        int arr4[1] = {15};
        int arr5[3] = {7, 8, 9};
        Sequence<int> *seq = new ArraySequence<int>(arr, 10);
        Sequence<int> *seq_curr;
        Sequence<int> *seq2 = new ArraySequence<int>(arr2, 5);
        Sequence<int> *seq3 = new ArraySequence<int>(arr3, 1);
        Sequence<int> *seq4 = new ArraySequence<int>(arr4, 1);
        Sequence<int> *seq5 = new ArraySequence<int>(arr5, 3);
        assert(1 == seq->GetFirst());
        assert(1 == seq2->GetFirst());
        assert(1 == seq3->GetFirst());
        assert(15 == seq4->GetFirst());
        assert(7 == seq5->GetFirst());
    }
}

void TestGetLast() {
    {
        int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
        int arr2[5] = {1, 2, 3, 4, 5};
        int arr3[1] = {1};
        int arr4[1] = {15};
        int arr5[3] = {7, 8, 9};
        Sequence<int> *seq = new ImmutableListSequence<int>(arr, 10);
        Sequence<int> *seq2 = new ImmutableListSequence<int>(arr2, 5);
        Sequence<int> *seq3 = new ImmutableListSequence<int>(arr3, 1);
        Sequence<int> *seq4 = new ImmutableListSequence<int>(arr4, 1);
        Sequence<int> *seq5 = new ImmutableListSequence<int>(arr5, 3);

        assert(15 == seq->GetLast());
        assert(5 == seq2->GetLast());
        assert(1 == seq3->GetLast());
        assert(15 == seq4->GetLast());
        assert(9 == seq5->GetLast());
    }
    {
        int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
        int arr2[5] = {1, 2, 3, 4, 5};
        int arr3[1] = {1};
        int arr4[1] = {15};
        int arr5[3] = {7, 8, 9};
        Sequence<int> *seq = new ArraySequence<int>(arr, 10);
        Sequence<int> *seq2 = new ArraySequence<int>(arr2, 5);
        Sequence<int> *seq3 = new ArraySequence<int>(arr3, 1);
        Sequence<int> *seq4 = new ArraySequence<int>(arr4, 1);
        Sequence<int> *seq5 = new ArraySequence<int>(arr5, 3);
        assert(15 == seq->GetLast());
        assert(5 == seq2->GetLast());
        assert(1 == seq3->GetLast());
        assert(15 == seq4->GetLast());
        assert(9 == seq5->GetLast());
    }
}

void TestGetIndex() {
    {
        int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
        int arr2[5] = {1, 2, 3, 4, 5};
        int arr3[1] = {1};
        int arr4[1] = {15};
        int arr5[3] = {7, 8, 9};
        Sequence<int> *seq = new ImmutableListSequence<int>(arr, 10);
        Sequence<int> *seq2 = new ImmutableListSequence<int>(arr2, 5);
        Sequence<int> *seq3 = new ImmutableListSequence<int>(arr3, 1);
        Sequence<int> *seq4 = new ImmutableListSequence<int>(arr4, 1);
        Sequence<int> *seq5 = new ImmutableListSequence<int>(arr5, 3);

//    try
//    {
//        seq2->DeleteIndex(5);
//    }
//    catch(char const * str)
//    {
//        cout << str << "\n";
//    }

        assert(15 == seq->GetIndex(9));
        assert(3 == seq2->GetIndex(2));
        assert(1 == seq3->GetIndex(0));
        assert(15 == seq4->GetIndex(0));
        assert(8 == seq5->GetIndex(1));
    }
    {
        int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
        int arr2[5] = {1, 2, 3, 4, 5};
        int arr3[1] = {1};
        int arr4[1] = {15};
        int arr5[3] = {7, 8, 9};
        Sequence<int> *seq = new ArraySequence<int>(arr, 10);
        Sequence<int> *seq2 = new ArraySequence<int>(arr2, 5);
        Sequence<int> *seq3 = new ArraySequence<int>(arr3, 1);
        Sequence<int> *seq4 = new ArraySequence<int>(arr4, 1);
        Sequence<int> *seq5 = new ArraySequence<int>(arr5, 3);
        assert(15 == seq->GetIndex(9));
        assert(3 == seq2->GetIndex(2));
        assert(1 == seq3->GetIndex(0));
        assert(15 == seq4->GetIndex(0));
        assert(8 == seq5->GetIndex(1));
    }
}

void TestGetLenght() {
    {
        int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
        int arr2[5] = {1, 2, 3, 4, 5};
        int arr3[1] = {1};
        int arr4[1] = {15};
        int arr5[3] = {7, 8, 9};
        Sequence<int> *seq = new ImmutableListSequence<int>(arr, 10);
        Sequence<int> *seq_curr;
        Sequence<int> *seq2 = new ImmutableListSequence<int>(arr2, 5);
        Sequence<int> *seq3 = new ImmutableListSequence<int>(arr3, 1);
        Sequence<int> *seq4 = new MutableListSequence<int>(arr4, 1);
        Sequence<int> *seq5 = new MutableListSequence<int>(arr5, 3);

        assert(10 == seq->GetLength());
        assert(5 == seq2->GetLength());
        assert(1 == seq3->GetLength());
        assert(1 == seq4->GetLength());
        assert(3 == seq5->GetLength());
    }
    {
        int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
        int arr2[5] = {1, 2, 3, 4, 5};
        int arr3[1] = {1};
        int arr4[1] = {15};
        int arr5[3] = {7, 8, 9};
        Sequence<int> *seq = new ArraySequence<int>(arr, 10);
        Sequence<int> *seq_curr;
        Sequence<int> *seq2 = new ArraySequence<int>(arr2, 5);
        Sequence<int> *seq3 = new ArraySequence<int>(arr3, 1);
        Sequence<int> *seq4 = new ArraySequence<int>(arr4, 1);
        Sequence<int> *seq5 = new ArraySequence<int>(arr5, 3);
        assert(10 == seq->GetLength());
        assert(5 == seq2->GetLength());
        assert(1 == seq3->GetLength());
        assert(1 == seq4->GetLength());
        assert(3 == seq5->GetLength());
    }
}

void TestPrepend() {
    {
        int arr0[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
        int arr2[5] = {1, 2, 3, 4, 5};
        int arr3[1] = {1};
        int arr4[1] = {15};
        int arr5[3] = {7, 8, 9};
        int arr6[0];

        Sequence<int> *seq0 = new MutableListSequence<int>(arr0, 10);
        Sequence<int> *seq2 = new MutableListSequence<int>(arr2, 5);
        Sequence<int> *seq3 = new MutableListSequence<int>(arr3, 1);
        Sequence<int> *seq4 = new ImmutableListSequence<int>(arr4, 1);
        Sequence<int> *seq5 = new ImmutableListSequence<int>(arr5, 3);
        Sequence<int> *seq6 = new ImmutableListSequence<int>(arr6, 0);
        int arr01[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
        int arr21[6] = {-100, 1, 2, 3, 4, 5};
        int arr31[2] = {76, 1};
        int arr41[2] = {15, 15};
        int arr51[4] = {9, 7, 8, 9};
        int arr61[1] = {-100500};
        Sequence<int> *seq01 = new MutableListSequence<int>(arr01, 11);
        Sequence<int> *seq21 = new MutableListSequence<int>(arr21, 6);
        Sequence<int> *seq31 = new MutableListSequence<int>(arr31, 2);
        Sequence<int> *seq41 = new MutableListSequence<int>(arr41, 2);
        Sequence<int> *seq51 = new MutableListSequence<int>(arr51, 4);
        Sequence<int> *seq61 = new MutableListSequence<int>(arr61, 1);
        seq0 = seq0->Prepend(0);
        seq2 = seq2->Prepend(-100);
        seq3 = seq3->Prepend(76);
        seq4 = seq4->Prepend(15);
        seq5 = seq5->Prepend(9);
        seq6 = seq6->Prepend(-100500);

        assert(seq0->is_equal(seq01));
        assert(seq2->is_equal(seq21));
        assert(seq3->is_equal(seq31));
        assert(seq4->is_equal(seq41));
        assert(seq5->is_equal(seq51));
        assert(seq61->is_equal(seq6));
    }
    {
        int arr0[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
        int arr2[5] = {1, 2, 3, 4, 5};
        int arr3[1] = {1};
        int arr4[1] = {15};
        int arr5[3] = {7, 8, 9};
        int arr6[0];

        Sequence<int> *seq0 = new ArraySequence<int>(arr0, 10);
        Sequence<int> *seq2 = new ArraySequence<int>(arr2, 5);
        Sequence<int> *seq3 = new ArraySequence<int>(arr3, 1);
        Sequence<int> *seq4 = new ArraySequence<int>(arr4, 1);
        Sequence<int> *seq5 = new ArraySequence<int>(arr5, 3);
        Sequence<int> *seq6 = new ArraySequence<int>(arr6, 0);
        int arr01[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
        int arr21[6] = {-100, 1, 2, 3, 4, 5};
        int arr31[2] = {76, 1};
        int arr41[2] = {15, 15};
        int arr51[4] = {9, 7, 8, 9};
        int arr61[1] = {-100500};
        Sequence<int> *seq01 = new ArraySequence<int>(arr01, 11);
        Sequence<int> *seq21 = new ArraySequence<int>(arr21, 6);
        Sequence<int> *seq31 = new ArraySequence<int>(arr31, 2);
        Sequence<int> *seq41 = new ArraySequence<int>(arr41, 2);
        Sequence<int> *seq51 = new ArraySequence<int>(arr51, 4);
        Sequence<int> *seq61 = new ArraySequence<int>(arr61, 1);
        seq0 = seq0->Prepend(0);
        seq2 = seq2->Prepend(-100);
        seq3 = seq3->Prepend(76);
        seq4 = seq4->Prepend(15);
        seq5 = seq5->Prepend(9);
        seq6 = seq6->Prepend(-100500);

        assert(seq0->is_equal(seq01));
        assert(seq2->is_equal(seq21));
        assert(seq3->is_equal(seq31));
        assert(seq4->is_equal(seq41));
        assert(seq5->is_equal(seq51));
        assert(seq61->is_equal(seq6));
    }

}

void TestAppend() {
    {
        int arr0[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
        int arr2[5] = {1, 2, 3, 4, 5};
        int arr3[1] = {1};
        int arr4[1] = {15};
        int arr5[3] = {7, 8, 9};
        int arr6[0];

        Sequence<int> *seq0 = new MutableListSequence<int>(arr0, 10);
        Sequence<int> *seq2 = new MutableListSequence<int>(arr2, 5);
        Sequence<int> *seq3 = new MutableListSequence<int>(arr3, 1);
        Sequence<int> *seq4 = new MutableListSequence<int>(arr4, 1);
        Sequence<int> *seq5 = new MutableListSequence<int>(arr5, 3);
        Sequence<int> *seq6 = new MutableListSequence<int>(arr6, 0);
        int arr01[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15, 0};
        int arr21[6] = {1, 2, 3, 4, 5, -100};
        int arr31[2] = {1, 76};
        int arr41[2] = {15, 15};
        int arr51[4] = {7, 8, 9, 9};
        int arr61[1] = {-100500};
        Sequence<int> *seq01 = new ImmutableListSequence<int>(arr01, 11);
        Sequence<int> *seq21 = new ImmutableListSequence<int>(arr21, 6);
        Sequence<int> *seq31 = new ImmutableListSequence<int>(arr31, 2);
        Sequence<int> *seq41 = new ImmutableListSequence<int>(arr41, 2);
        Sequence<int> *seq51 = new ImmutableListSequence<int>(arr51, 4);
        Sequence<int> *seq61 = new ImmutableListSequence<int>(arr61, 1);
        seq0->Append(0);
        seq2->Append(-100);
        seq3->Append(76);
        seq4->Append(15);
        seq5->Append(9);
        seq6->Append(-100500);

        assert(seq0->is_equal(seq01));
        assert(seq2->is_equal(seq21));
        assert(seq3->is_equal(seq31));
        assert(seq4->is_equal(seq41));
        assert(seq5->is_equal(seq51));
        assert(seq61->is_equal(seq6));
    }
    {
        int arr0[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
        int arr2[5] = {1, 2, 3, 4, 5};
        int arr3[1] = {1};
        int arr4[1] = {15};
        int arr5[3] = {7, 8, 9};
        int arr6[0];

        Sequence<int> *seq0 = new ArraySequence<int>(arr0, 10);
        Sequence<int> *seq2 = new ArraySequence<int>(arr2, 5);
        Sequence<int> *seq3 = new ArraySequence<int>(arr3, 1);
        Sequence<int> *seq4 = new ArraySequence<int>(arr4, 1);
        Sequence<int> *seq5 = new ArraySequence<int>(arr5, 3);
        Sequence<int> *seq6 = new ArraySequence<int>(arr6, 0);
        int arr01[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15, 0};
        int arr21[6] = {1, 2, 3, 4, 5, -100};
        int arr31[2] = {1, 76};
        int arr41[2] = {15, 15};
        int arr51[4] = {7, 8, 9, 9};
        int arr61[1] = {-100500};
        Sequence<int> *seq01 = new ArraySequence<int>(arr01, 11);
        Sequence<int> *seq21 = new ArraySequence<int>(arr21, 6);
        Sequence<int> *seq31 = new ArraySequence<int>(arr31, 2);
        Sequence<int> *seq41 = new ArraySequence<int>(arr41, 2);
        Sequence<int> *seq51 = new ArraySequence<int>(arr51, 4);
        Sequence<int> *seq61 = new ArraySequence<int>(arr61, 1);
        seq0 = seq0->Append(0);
        seq2 = seq2->Append(-100);
        seq3 = seq3->Append(76);
        seq4 = seq4->Append(15);
        seq5 = seq5->Append(9);
        seq6 = seq6->Append(-100500);

        assert(seq0->is_equal(seq01));
        assert(seq2->is_equal(seq21));
        assert(seq3->is_equal(seq31));
        assert(seq4->is_equal(seq41));
        assert(seq5->is_equal(seq51));
        assert(seq61->is_equal(seq6));
    }

}

void TestConcat() {
    {
        int arr0[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
        int arr2[5] = {1, 2, 3, 4, 5};
        int arr3[1] = {1};
        int arr4[1] = {15};
        int arr5[3] = {7, 8, 9};
        int arr6[0];

        Sequence<int> *seq0 = new ImmutableListSequence<int>(arr0, 10);
        Sequence<int> *seq2 = new ImmutableListSequence<int>(arr2, 5);
        Sequence<int> *seq3 = new ImmutableListSequence<int>(arr3, 1);
        Sequence<int> *seq4 = new ImmutableListSequence<int>(arr4, 1);
        Sequence<int> *seq5 = new ImmutableListSequence<int>(arr5, 3);
        Sequence<int> *seq6 = new ImmutableListSequence<int>(arr6, 0);

        seq0 = seq0->Concat(seq0);
        seq2 = seq2->Concat(seq2);
        seq3 = seq3->Concat(seq3);
        seq4 = seq4->Concat(seq4);
        seq5 = seq5->Concat(seq5);
        seq6 = seq6->Concat(seq6);

        int arr01[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15, 1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
        int arr21[10] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
        int arr31[2] = {1, 1};
        int arr41[2] = {15, 15};
        int arr51[6] = {7, 8, 9, 7, 8, 9};
        int arr61[0];
        Sequence<int> *seq01 = new ArraySequence<int>(arr01, 20);
        Sequence<int> *seq21 = new ArraySequence<int>(arr21, 10);
        Sequence<int> *seq31 = new ArraySequence<int>(arr31, 2);
        Sequence<int> *seq41 = new ArraySequence<int>(arr41, 2);
        Sequence<int> *seq51 = new ArraySequence<int>(arr51, 6);
        Sequence<int> *seq61 = new ArraySequence<int>(arr61, 0);

        assert(seq0->is_equal(seq01));
        assert(seq2->is_equal(seq21));
        assert(seq3->is_equal(seq31));
        assert(seq4->is_equal(seq41));
        assert(seq5->is_equal(seq51));
        assert(seq61->is_equal(seq6));
    }
}

void test_module() {
    cout << "_______Testing is starting_______" << endl;
    TestGetSubsequence();
    cout << "TestGetSubSequence has passed." << endl;
    TestGetFirst();
    cout << "TestGetFirst has passed" << endl;
    TestGetLast();
    cout << "TestGetLast has passed." << endl;
    TestGetIndex();
    cout << "TestGetIndex has passed." << endl;
    TestGetLenght();
    cout << "TestGetLength has passed." << endl;
    TestPrepend();
    cout << "TestPrepend has passed." << endl;
    TestAppend();
    cout << "TestAppend has passed." << endl;
    TestConcat();
    cout << "TestContact has passed." << endl;
}
