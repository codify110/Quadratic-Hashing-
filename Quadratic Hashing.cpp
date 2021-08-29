#include <iostream>
using namespace std;
int hashfun(int y, int size)
{
return (y % size);
}
int linear(int size, int *arr, int index, int count, int key)
{
index = (hashfun(key, size) + count); // for 32 ..the rturn value is 2+ 0
if (index < size)
{
if (arr[index] == 0)
{
return index;
}
linear(size, arr, index, ++count, key);

}
else
{

if (arr[hashfun(index, size)] == 0)
{
index = hashfun(index, size);
return index;
}
linear(size, arr, index, ++count, key);
}
}
void insertion(int size, int *arr, int index, int count, int key)
{
if (arr[hashfun(key, size)] == 0)
{
arr[hashfun(key, size)] = key; // returned index is 8th index =18
}
else
{
index = linear(size, arr, index, count, key);
arr[index] = key;
}
}
int main()
{
int size, key, elements;
int count;
int index;
cout << "Enter size of array:" << endl;
cin >> size;
int *arr = new int[size];
for (int i = 0; i < size; i++)
{
arr[i] = 0;
}
cout << "How many elements you want to enter:" << endl;
cin >> elements;

for (int i = 0; i < elements; i++)
{
cin >> key;
insertion(size, arr, index = 0, count = 0, key);
}
for (int i = 0; i < size; i++)
{
cout << arr[i] << " ";
}

system("pause");
}
