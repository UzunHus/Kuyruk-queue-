#include <iostream> //cout için
#include <queue>
using namespace std;

int main() {
	queue<char> q;
	q.push('s');//kuruðun sonuna ekle
	q.push('e');
	q.push('r');
	q.push('k');
	q.push('a');
	q.push('n');
	cout << q.front() << endl;//kuyruðun baþýný oku
	q.pop();//kuyruðun ilk elemanýný sil
	q.pop();//kuyruðun ilk elemanýný sil
	q.pop();//kuyruðun ilk elemanýný sil
	q.push('k');
	q.push('a');
	cout << q.front();
	q.pop();
	cout << q.front();
	q.pop();
	cout << q.front();
	q.pop();
	cout << q.front();
	q.pop();
	cout << q.front()<<endl;
	q.pop();
	q.push('b');
	q.push('b');
	q.push('d');
	q.front() = 'a';//kuyruðun baþýný modifiye et
	q.back() = 'c';//kuyruðun sonunu modifiye et
	for (int i = 0;i <= 2;i++) {
		cout << q.front();
		q.pop();
	}
	return 0;
}