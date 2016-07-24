#include <iostream>
#include <iterator>

using namespace std;

int strlen(string);

string reverse(string);
void printTrigon(char ,int );

template<class T>
void sort(T a[] ,int len);

int main() {
    string str = "abcd";
    //第4题
   // printTrigon('*',5);


    //第5题
   // cout << strlen(str) << endl;
   // cout << reverse(str);

    //第6题
    int a[5] ={3,6,11,9,23};
    sort(a ,5);
    copy(a,a+5,ostream_iterator<int>(cout," "));
    return 0;
}

//输出三角形  第4题
void printTrigon(char ch,int num){
    for (int i = 0; i <= num; ++i) {
        for(int l =0;l<=i;l++){
            cout<<ch;
        }
        cout<<endl;

    }
}


//以下是编程题的地5小题
int strlen(string str) {
    int len = 0;
//     basic_string<char, std::char_traits<char>, std::allocator<char>>::iterator it ;
  /*  string::iterator it;
    for (it = str.begin(); *it != '\0'; it++) {
        cout << *it << endl;
        len++;
    }*/

    //*str.end() = '\0'
     while (*(str.begin() + len) != *str.end()) {
         len++;
     }

    return len;
}

string reverse(string str) {
    char c;
    int l = strlen(str) / 2;
    for (int i = 0; i < l; i++) {
        c = *(str.begin() + i);
        *(str.begin() + i) = *(str.end() - i - 1);
        *(str.end() - i - 1) = c;
    }
    return str;
}

//第6题
template<class T>
void sort(T a[] ,int len){
    T temp;
    //int a1[5] ={3,6,11,9,23};
    //int len =  (sizeof(a)/ sizeof(a[1])); 使用函数模板后，sizeof不能确定T的具体类型，无法计算数组长度。
    for(int i=0;i< len;i++){
        temp = a[i];
        for(int j = i + 1; j < len; j++) {
            if(temp > a[j]) {
                a[i] = a[j];
                a[j] = temp;
                temp = a[i];
            }
        }
    }
}
