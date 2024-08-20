//#include <iostream>
//using namespace std;
//class Demo {
//    int x;
//public:
//    void set_data(int a) { x = a++; }
//    int get_data() 
//    {
//        ++x;
//        return x;
//    }
//};
//int main()
//{
//    Demo d;
//    d.set_data(10);
//    cout << endl << d.get_data();
//    return 0;
//}


//
//
//// test-2
//#include <iostream>
//using namespace std;
//class Superbase {
//public:
//    void virtual display() = 0;
//};
//
//class Base :public Superbase {
//public:
//    void display() { cout << " Base is display"; }
//};
//
//class Derived :public Base {
//public:
//    void display() { cout << " Derived is display"; }
//};
//
//int main()
//{
//    Base* pPbj = new Derived();
//    pPbj->display();
//
//    
//
//    return 0;
//}

//
//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "hello world of search\n";
//	int arr[5];
//	cout << "pls enter numbers in array to search\n";
//	for (int i = 0; i < 5; i++)
//	{
//		cin >> arr[i];
//		cout << "\nu entered at " << i << "th Index == " << arr[i] << endl;
//	}
//	
//	// do searching
//
//	int number;
//	cout << "enter a numbner to search";
//	cin >> number;
//	int temp1 = number;
//	
//	for (int i = 0; i < 5; i++)
//	{
//		
//		if (temp1==arr[i])
//		{
//			cout << "searched element is found at [" << i << "]th Index == " << arr[i] << endl;
//			break;
//		}
//		else
//		{
//			cout << "element is not found at ["<<i<<"]th Index\n";
//		}
//		
//	}
//
//	// do sorting, error
//	/*for (int i = 0; i < 5; i++)
//	{
//		
//			for (int j = 1; j <=5; j++)
//			{
//				if (arr[j-1] > arr[j])
//				{
//
//					int temp2;
//					temp2 = arr[j];
//					arr[j-1] = arr[j];
//					arr[j] = temp2;
//				}
//			}
//		
//
//	}
//	cout << "sorted elements are\n";
//	for (int i = 0; i < 5; i++)
//	{
//
//		
//		cout << arr[i] << " , ";
//
//	}*/
//	return 0;
//}






// Test
#include<iostream>
using namespace std;

	
int main()// entry point
{
	cout << "hello all\n";


	
}
