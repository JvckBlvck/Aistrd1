#include "stdafx.h"
#include "CppUnitTest.h"
#include "../ConsoleApplication2/list.h"
#include "../ConsoleApplication2/equal.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(get_size_int_0)
		{
			size_t size1 = 0;
			list<int> list1;
			list1.get_size(&size1);
			size_t size2 = 0;
			Assert::AreEqual(size1, size2);
		}
		TEST_METHOD(get_size_int_3)
		{
			size_t size1 = 0;
			list<int> list1;
			list1.push_back(1);
			list1.push_back(1);
			list1.push_back(1);
			list1.get_size(&size1);
			size_t size2 = 3;
			Assert::AreEqual(size1, size2);
		}
		TEST_METHOD(get_size_double_0)
		{
			size_t size1 = 0;
			list<double> list1;
			list1.get_size(&size1);
			size_t size2 = 0;
			Assert::AreEqual(size1, size2);
		}
		TEST_METHOD(get_size_double_3)
		{
			size_t size1 = 0;
			list<double> list1;
			list1.push_back(1.7);
			list1.push_back(1.7);
			list1.push_back(1.7);
			list1.get_size(&size1);
			size_t size2 = 3;
			Assert::AreEqual(size1, size2);
		}
		TEST_METHOD(get_size_char_0)
		{
			size_t size1 = 0;
			list<char> list1;
			list1.get_size(&size1);
			size_t size2 = 0;
			Assert::AreEqual(size1, size2);
		}
		TEST_METHOD(get_size_char_3)
		{
			size_t size1 = 0;
			list<char> list1;
			list1.push_back('a');
			list1.push_back('a');
			list1.push_back('a');
			list1.get_size(&size1);
			size_t size2 = 3;
			Assert::AreEqual(size1, size2);
		}
		TEST_METHOD(at_int_head)
		{
			list<int> list1;
			list1.push_back(1);
			list1.push_back(2);
			list1.push_back(3);
			int data;
			int check;
			list1.at(0, &data, &check);
			Assert::AreEqual(data, 1);
		}
		TEST_METHOD(at_int_meadle)
		{
			list<int> list1;
			list1.push_back(1);
			list1.push_back(2);
			list1.push_back(3);
			int data;
			int check;
			list1.at(1, &data, &check);
			Assert::AreEqual(data, 2);
		}
		TEST_METHOD(at_int_tail)
		{
			list<int> list1;
			list1.push_back(1);
			list1.push_back(2);
			list1.push_back(3);
			int data;
			int check;
			list1.at(2, &data, &check);
			Assert::AreEqual(data, 3);
		}
		TEST_METHOD(at_int_out_of_range)
		{
			list<int> list1;
			list1.push_back(1);
			list1.push_back(2);
			list1.push_back(3);
			int data;
			int check;
			list1.at(3, &data, &check);
			Assert::AreEqual(check, -1);
		}
		TEST_METHOD(at_double_head)
		{
			list<double> list1;
			list1.push_back(1.7);
			list1.push_back(2.7);
			list1.push_back(3.7);
			double data;
			int check;
			list1.at(0, &data, &check);
			Assert::AreEqual(data, 1.7);
		}
		TEST_METHOD(at_double_meadle)
		{
			list<double> list1;
			list1.push_back(1.7);
			list1.push_back(2.7);
			list1.push_back(3.7);
			double data;
			int check;
			list1.at(1, &data, &check);
			Assert::AreEqual(data, 2.7);
		}
		TEST_METHOD(at_double_tail)
		{
			list<double> list1;
			list1.push_back(1.7);
			list1.push_back(2.7);
			list1.push_back(3.7);
			double data;
			int check;
			list1.at(2, &data, &check);
			Assert::AreEqual(data, 3.7);
		}
		TEST_METHOD(at_double_out_of_range)
		{
			list<double> list1;
			list1.push_back(1.7);
			list1.push_back(2.7);
			list1.push_back(3.7);
			double data;
			int check;
			list1.at(3, &data, &check);
			Assert::AreEqual(check, -1);
		}
		TEST_METHOD(at_char_head)
		{
			list<char> list1;
			list1.push_back('a');
			list1.push_back('b');
			list1.push_back('c');
			char data;
			int check;
			list1.at(0, &data, &check);
			Assert::AreEqual(data, 'a');
		}
		TEST_METHOD(at_char_meadle)
		{
			list<char> list1;
			list1.push_back('a');
			list1.push_back('b');
			list1.push_back('c');
			char data;
			int check;
			list1.at(1, &data, &check);
			Assert::AreEqual(data, 'b');
		}
		TEST_METHOD(at_char_tail)
		{
			list<char> list1;
			list1.push_back('a');
			list1.push_back('b');
			list1.push_back('c');
			char data;
			int check;
			list1.at(2, &data, &check);
			Assert::AreEqual(data, 'c');
		}
		TEST_METHOD(at_char_out_of_range)
		{
			list<char> list1;
			list1.push_back('a');
			list1.push_back('b');
			list1.push_back('c');
			char data;
			int check;
			list1.at(3, &data, &check);
			Assert::AreEqual(check, -1);
		}
		TEST_METHOD(equal_lists_int_size_0)
		{
			list<int> list1;
			list<int> list2;
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(equal_lists_int_size_3)
		{
			list<int> list1;
			list1.push_back(1);
			list1.push_back(2);
			list1.push_back(3);
			list<int> list2;
			list2.push_back(1);
			list2.push_back(2);
			list2.push_back(3);
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(equal_lists_double_size_0)
		{
			list<double> list1;
			list<double> list2;
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(equal_lists_double_size_3)
		{
			list<double> list1;
			list1.push_back(1.7);
			list1.push_back(2.7);
			list1.push_back(3.7);
			list<double> list2;
			list2.push_back(1.7);
			list2.push_back(2.7);
			list2.push_back(3.7);
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(equal_lists_char_size_0)
		{
			list<char> list1;
			list<char> list2;
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(equal_lists_char_size_3)
		{
			list<char> list1;
			list1.push_back('a');
			list1.push_back('b');
			list1.push_back('c');
			list<char> list2;
			list2.push_back('a');
			list2.push_back('b');
			list2.push_back('c');
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(push_front_int_to_0)
		{
			list<int> list1;
			list1.push_back(1);
			list<int> list2;
			list2.push_front(1);
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(push_front_int_to_1)
		{
			list<int> list1;
			list1.push_back(1);
			list1.push_back(2);
			list<int> list2;
			list2.push_back(2);
			list2.push_front(1);
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(push_front_int_to_2)
		{
			list<int> list1;
			list1.push_back(1);
			list1.push_back(2);
			list1.push_back(3);
			list<int> list2;
			list2.push_back(2);
			list2.push_back(3);
			list2.push_front(1);
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(push_front_double_to_0)
		{
			list<double> list1;
			list1.push_back(1.7);
			list<double> list2;
			list2.push_front(1.7);
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(push_front_double_to_1)
		{
			list<double> list1;
			list1.push_back(1.7);
			list1.push_back(2.7);
			list<double> list2;
			list2.push_back(2.7);
			list2.push_front(1.7);
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(push_front_double_to_2)
		{
			list<int> list1;
			list1.push_back(1.7);
			list1.push_back(2.7);
			list1.push_back(3.7);
			list<int> list2;
			list2.push_back(2.7);
			list2.push_back(3.7);
			list2.push_front(1.7);
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(push_front_char_to_0)
		{
			list<char> list1;
			list1.push_back('a');
			list<char> list2;
			list2.push_front('a');
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(push_front_char_to_1)
		{
			list<char> list1;
			list1.push_back('a');
			list1.push_back('b');
			list<char> list2;
			list2.push_back('b');
			list2.push_front('a');
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(push_front_char_to_2)
		{
			list<int> list1;
			list1.push_back('a');
			list1.push_back('b');
			list1.push_back('c');
			list<int> list2;
			list2.push_back('b');
			list2.push_back('c');
			list2.push_front('a');
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(pop_back_int_from_0)
		{
			list<int> list1;
			list<int> list2;
			list2.pop_back();
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(pop_back_int_from_1)
		{
			list<int> list1;
			list<int> list2;
			list2.push_back(1);
			list2.pop_back();
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(pop_back_int_from_2)
		{
			list<int> list1;
			list1.push_back(1);
			list<int> list2;
			list2.push_back(1);
			list2.push_back(2);
			list2.pop_back();
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(pop_back_double_from_0)
		{
			list<double> list1;
			list<double> list2;
			list2.pop_back();
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(pop_back_double_from_1)
		{
			list<double> list1;
			list<double> list2;
			list2.push_back(1.7);
			list2.pop_back();
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(pop_back_double_from_2)
		{
			list<double> list1;
			list1.push_back(1.7);
			list<double> list2;
			list2.push_back(1.7);
			list2.push_back(2.7);
			list2.pop_back();
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(pop_back_char_from_0)
		{
			list<char> list1;
			list<char> list2;
			list2.pop_back();
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(pop_back_char_from_1)
		{
			list<char> list1;
			list<char> list2;
			list2.push_back('a');
			list2.pop_back();
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(pop_back_char_from_2)
		{
			list<char> list1;
			list1.push_back('a');
			list<char> list2;
			list2.push_back('a');
			list2.push_back('b');
			list2.pop_back();
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(pop_front_int_from_0)
		{
			list<int> list1;
			list<int> list2;
			list2.pop_front();
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(pop_front_int_from_1)
		{
			list<int> list1;
			list<int> list2;
			list2.push_back(1);
			list2.pop_front();
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(pop_front_int_from_2)
		{
			list<int> list1;
			list1.push_back(2);
			list<int> list2;
			list2.push_back(1);
			list2.push_back(2);
			list2.pop_front();
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(pop_front_double_from_0)
		{
			list<double> list1;
			list<double> list2;
			list2.pop_front();
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(pop_front_double_from_1)
		{
			list<double> list1;
			list<double> list2;
			list2.push_back(1.7);
			list2.pop_front();
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(pop_front_double_from_2)
		{
			list<double> list1;
			list1.push_back(2.7);
			list<double> list2;
			list2.push_back(1.7);
			list2.push_back(2.7);
			list2.pop_front();
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(pop_front_char_from_0)
		{
			list<char> list1;
			list<char> list2;
			list2.pop_front();
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(pop_front_char_from_1)
		{
			list<char> list1;
			list<char> list2;
			list2.push_back('a');
			list2.pop_front();
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(pop_front_char_from_2)
		{
			list<char> list1;
			list1.push_back('b');
			list<char> list2;
			list2.push_back('a');
			list2.push_back('b');
			list2.pop_front();
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(insert_int_index_0)
		{
			list<int> list1;
			list1.push_back(1);
			list1.push_back(2);
			list<int> list2;
			list2.push_back(2);
			list2.insert(0, 1);
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(insert_int_middle)
		{
			list<int> list1;
			list1.push_back(1);
			list1.push_back(2);
			list1.push_back(3);
			list<int> list2;
			list2.push_back(1);
			list2.push_back(3);
			list2.insert(1, 2);
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(insert_int_out_of_range)
		{
			list<int> list1;
			list1.push_back(1);
			list<int> list2;
			list2.push_back(1);
			list2.insert(1, 2);
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(insert_double_index_0)
		{
			list<double> list1;
			list1.push_back(1.7);
			list1.push_back(2.7);
			list<double> list2;
			list2.push_back(2.7);
			list2.insert(0, 1.7);
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(insert_double_middle)
		{
			list<double> list1;
			list1.push_back(1.7);
			list1.push_back(2.7);
			list1.push_back(3.7);
			list<double> list2;
			list2.push_back(1.7);
			list2.push_back(3.7);
			list2.insert(1, 2.7);
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(insert_double_out_of_range)
		{
			list<double> list1;
			list1.push_back(1.7);
			list<double> list2;
			list2.push_back(1.7);
			list2.insert(1, 2.7);
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(insert_char_index_0)
		{
			list<char> list1;
			list1.push_back('a');
			list1.push_back('b');
			list<char> list2;
			list2.push_back('b');
			list2.insert(0, 'a');
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(insert_char_middle)
		{
			list<char> list1;
			list1.push_back('a');
			list1.push_back('b');
			list1.push_back('c');
			list<char> list2;
			list2.push_back('a');
			list2.push_back('c');
			list2.insert(1, 'b');
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(insert_char_out_of_range)
		{
			list<char> list1;
			list1.push_back('a');
			list<char> list2;
			list2.push_back('a');
			list2.insert(1, 'b');
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(remove_int_index_0)
		{
			list<int> list1;
			list1.push_back(2);
			list<int> list2;
			list2.push_back(1);
			list2.push_back(2);
			list2.remove(0);
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(remove_int_index_size_sub_1)
		{
			list<int> list1;
			list1.push_back(1);
			list<int> list2;
			list2.push_back(1);
			list2.push_back(2);
			list2.remove(1);
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(remove_int_middle)
		{
			list<int> list1;
			list1.push_back(1);
			list1.push_back(3);
			list<int> list2;
			list2.push_back(1);
			list2.push_back(2);
			list2.push_back(3);
			list2.remove(1);
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(remove_int_out_of_range)
		{
			list<int> list1;
			list<int> list2;
			list2.remove(0);
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(remove_double_index_0)
		{
			list<double> list1;
			list1.push_back(2.7);
			list<double> list2;
			list2.push_back(1.7);
			list2.push_back(2.7);
			list2.remove(0);
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(remove_double_index_size_sub_1)
		{
			list<double> list1;
			list1.push_back(1.7);
			list<double> list2;
			list2.push_back(1.7);
			list2.push_back(2.7);
			list2.remove(1);
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(remove_double_middle)
		{
			list<double> list1;
			list1.push_back(1.7);
			list1.push_back(3.7);
			list<double> list2;
			list2.push_back(1.7);
			list2.push_back(2.7);
			list2.push_back(3.7);
			list2.remove(1);
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(remove_double_out_of_range)
		{
			list<int> list1;
			list<int> list2;
			list2.remove(0);
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(remove_char_index_0)
		{
			list<char> list1;
			list1.push_back('b');
			list<char> list2;
			list2.push_back('a');
			list2.push_back('b');
			list2.remove(0);
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(remove_char_index_size_sub_1)
		{
			list<char> list1;
			list1.push_back('a');
			list<char> list2;
			list2.push_back('a');
			list2.push_back('b');
			list2.remove(1);
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(remove_char_middle)
		{
			list<char> list1;
			list1.push_back('a');
			list1.push_back('c');
			list<char> list2;
			list2.push_back('a');
			list2.push_back('b');
			list2.push_back('c');
			list2.remove(1);
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(remove_char_out_of_range)
		{
			list<int> list1;
			list<int> list2;
			list2.remove(0);
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(clear_int_size_0)
		{
			list<int> list1;
			list<int> list2;
			list2.clear();
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(clear_int_size_3)
		{
			list<int> list1;
			list<int> list2;
			list2.push_back(1);
			list2.push_back(2);
			list2.push_back(3);
			list2.clear();
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(clear_double_size_0)
		{
			list<double> list1;
			list<double> list2;
			list2.clear();
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(clear_double_size_3)
		{
			list<double> list1;
			list<double> list2;
			list2.push_back(1.7);
			list2.push_back(2.7);
			list2.push_back(3.7);
			list2.clear();
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(clear_char_size_0)
		{
			list<char> list1;
			list<char> list2;
			list2.clear();
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(clear_char_size_3)
		{
			list<char> list1;
			list<char> list2;
			list2.push_back('a');
			list2.push_back('b');
			list2.push_back('c');
			list2.clear();
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(set_int_middle)
		{
			list<int> list1;
			list1.push_back(1);
			list<int> list2;
			list2.push_back(2);
			list2.set(1, 0);
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(set_int_out_of_range)
		{
			list<int> list1;
			list1.push_back(1);
			list<int> list2;
			list2.push_back(1);
			list2.set(2, 1);
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(set_double_middle)
		{
			list<double> list1;
			list1.push_back(1.7);
			list<double> list2;
			list2.push_back(2.7);
			list2.set(1.7, 0);
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(set_double_out_of_range)
		{
			list<double> list1;
			list1.push_back(1.7);
			list<double> list2;
			list2.push_back(1.7);
			list2.set(2.7, 1);
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(set_char_middle)
		{
			list<char> list1;
			list1.push_back('a');
			list<char> list2;
			list2.push_back('b');
			list2.set('a', 0);
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(set_char_out_of_range)
		{
			list<char> list1;
			list1.push_back('a');
			list<char> list2;
			list2.push_back('a');
			list2.set('b', 1);
			Assert::IsTrue(equal_lists(list1, list2));
		}
		TEST_METHOD(is_empty_int_empty)
		{
			list<int> list1;
			int check;
			list1.is_empty(&check);
			Assert::AreEqual(1, check);
		}
		TEST_METHOD(is_empty_int_isnt_empty)
		{
			list<int> list1;
			list1.push_back(1);
			int check;
			list1.is_empty(&check);
			Assert::AreEqual(-1, check);
		}
		TEST_METHOD(is_empty_double_empty)
		{
			list<double> list1;
			int check;
			list1.is_empty(&check);
			Assert::AreEqual(1, check);
		}
		TEST_METHOD(is_empty_double_isnt_empty)
		{
			list<double> list1;
			list1.push_back(1.7);
			int check;
			list1.is_empty(&check);
			Assert::AreEqual(-1, check);
		}
		TEST_METHOD(is_empty_char_empty)
		{
			list<char> list1;
			int check;
			list1.is_empty(&check);
			Assert::AreEqual(1, check);
		}
		TEST_METHOD(is_empty_char_isnt_empty)
		{
			list<int> list1;
			list1.push_back('a');
			int check;
			list1.is_empty(&check);
			Assert::AreEqual(-1, check);
		}
	};
}