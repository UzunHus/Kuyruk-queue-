#include <iostream> //cout i�in
#include <queue>
using namespace std;

int main() {
	queue<char> q;
	q.push('s');//kuru�un sonuna ekle
	q.push('e');
	q.push('r');
	q.push('k');
	q.push('a');
	q.push('n');
	cout << q.front() << endl;//kuyru�un ba��n� oku
	q.pop();//kuyru�un ilk eleman�n� sil
	q.pop();//kuyru�un ilk eleman�n� sil
	q.pop();//kuyru�un ilk eleman�n� sil
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
	q.front() = 'a';//kuyru�un ba��n� modifiye et
	q.back() = 'c';//kuyru�un sonunu modifiye et
	for (int i = 0;i <= 2;i++) {
		cout << q.front();
		q.pop();
	}
	return 0;
}