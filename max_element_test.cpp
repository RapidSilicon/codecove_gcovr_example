#include <gtest/gtest.h>
#include "max_element.h" // Header file for the function definition

TEST(MaxElementTest, EmptyArray) {
    int arr[] = {};
    int size = 0;
    ASSERT_THROW(findMaxElement(arr, size), const char*);
}

TEST(MaxElementTest, PositiveNumbers) {
    int arr[] = {3, 7, 2, 9, 1, 4, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    ASSERT_EQ(findMaxElement(arr, size), 9);
}

TEST(MaxElementTest, NegativeNumbers) {
    int arr[] = {-5, -2, -9, -3, -1};
    int size = sizeof(arr) / sizeof(arr[0]);
    ASSERT_EQ(findMaxElement(arr, size), -1);
}

TEST(MaxElementTest, SingleElementArray) {
    int arr[] = {10};
    int size = sizeof(arr) / sizeof(arr[0]);
    ASSERT_EQ(findMaxElement(arr, size), 10);
}

