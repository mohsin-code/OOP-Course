#include<iostream>
using namespace std;

class IntegerSet {
    private:
        int set[50];

    public:
        IntegerSet();
        void NewIntegerSet(int arr[]);
        IntegerSet UnionOfIntegerSets(IntegerSet i);
        IntegerSet IntersectionOfIntegerSets(IntegerSet i);
        void InsertElement(int k);
        void DeleteElement(int m);
        void SetPrint();
        bool IsEqualTo(IntegerSet i);
};

IntegerSet::IntegerSet() {
    for(int i = 0; i < 50; i++) {
        set[i] = 0;
    }
}

void IntegerSet::NewIntegerSet(int arr[]){
    for(int i = 0; i<50; i++) {
        set[i] = arr[i];
    }
}

IntegerSet IntegerSet::UnionOfIntegerSets(IntegerSet i) {
    IntegerSet j;
    for (int n = 0; n < 50; n++) {
        j.set[n] = set[n] || i.set[n];
    }
    return j;
}

IntegerSet IntegerSet::IntersectionOfIntegerSets(IntegerSet i) {
    IntegerSet j;
    for (int n = 0; n < 50; n++) {
        j.set[n] = set[n] && i.set[n];
    }
    return j;
}

void IntegerSet::InsertElement(int k) {
    set[k] = 1;
}

void IntegerSet::DeleteElement(int m) {
    set[m] = 0;
}

void IntegerSet::SetPrint(){
    for (int i = 0; i < 50; i++) {
        cout<<set[i]<<" ";
    }
    cout<<endl;
}

bool IntegerSet::IsEqualTo(IntegerSet i){
    for (int n = 0; n < 50; n++) {
        if(set[n] != i.set[n]){
            return false;
        }
        return true;
    }
}

main() {
    int x[50],y[50];

    cout<<"Set values of Array X: ";
    for (int i = 0; i < 50; i++) {
        cin>>x[i];
        if(x[i] != 0) x[i] = 1;
    }

    cout<<"Set values of Array Y: ";
    for (int i = 0; i < 50; i++) {
        cin>>y[i];
        if(y[i] != 0) y[i] = 1;
    }

    IntegerSet i1,i2,i3;

    i1.NewIntegerSet(x);
    cout<<"I1: ";
    i1.SetPrint();

    i2.NewIntegerSet(y);
    cout<<"I2: ";
    i2.SetPrint();

    int k,m;

    cout<<"\nType location of insertion in I1: ";
    cin>>k;
    i1.InsertElement(k);

    cout<<"Type location of deletion in I1: ";
    cin>>m;
    i1.DeleteElement(m);

    cout<<endl;

    i3 = i1.UnionOfIntegerSets(i2);
    i3.SetPrint();

    i3 = i1.IntersectionOfIntegerSets(i2);
    i3.SetPrint();

    cout<<"\nAre i1 and i2 equal: "<<i1.IsEqualTo(i2);
}
