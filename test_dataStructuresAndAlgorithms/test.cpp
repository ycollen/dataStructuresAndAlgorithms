#include "pch.h"
#include "../dataStructuresAndAlgorithms/maxHeap.h"
TEST(maxHeapTest, isEmptyTest) {
	maxHeap<int> heap(4);
	EXPECT_EQ(heap.isEmpty(), true);
	heap.insert(1);
	EXPECT_EQ(heap.isEmpty(), false);
}

TEST(maxHeapTest, insert) {
	

	maxHeap<int> heap(2);
	heap.insert(3);
	EXPECT_EQ(heap.delMax(), 3);
	heap.insert(4);
	heap.insert(3);
	EXPECT_EQ(heap.delMax(), 4);
	
	
	heap.insert(232);
	heap.insert(0);
	heap.insert(5);
	heap.insert(10);
	heap.insert(1);
	EXPECT_EQ(heap.delMax(), 232);
	EXPECT_EQ(heap.delMax(), 10);
	EXPECT_EQ(heap.delMax(), 5);
	EXPECT_EQ(heap.delMax(), 3);
	EXPECT_EQ(heap.delMax(), 1);
	EXPECT_EQ(heap.delMax(), 0);
	//for (int i = 0; i < 6; i++) {
	//	int max = heap.delMax();
	//	switch (i)
	//	{
	//	case 1:
	//		EXPECT_EQ(max, 232);
	//		break;
	//	case 2:
	//		EXPECT_EQ(max, 10);
	//		break;
	//	case 3:
	//		EXPECT_EQ(max, 5);
	//		break;
	//	case 4:
	//		EXPECT_EQ(max, 3);
	//		break;
	//	case 5:
	//		EXPECT_EQ(max, 1);
	//		break;
	//	case 0:
	//		EXPECT_EQ(max, 0);
	//		break;
	//	default:
	//		break;
	//	}
	//}
}