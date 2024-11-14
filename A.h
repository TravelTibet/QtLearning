//#pragma once
//
//#include <iostream>
//#include <string>
//#define PICTURE_SIZE (sizeof(int))
//#define CIRCULAR_QUEUE_MAX_SIZE 3
//
//typedef enum Status
//{
//    //真值（是）
//    TRUE_STATUS = 3,
//
//    //假值（否）
//    FALSE_STATUS = 2,
//
//    //正常
//    NORMAL_STATUS = 1,
//
//    //异常
//    ERROR_STATUS = 0,
//
//    //队列初始化失败
//    INIT_FAILED_STATUS = -1,
//
//    //队列已满，入队失败
//    MAXSIZE_STATUS = -2,
//
//    //队列为空，出队失败
//    EMPTY_FAILED_STATUS = -3,
//
//}Status;
//class CircularQueue
//{
//public:
//    CircularQueue();
//    ~CircularQueue();
//private:
//    int* m_pBase;
//    int m_size;
//    int m_front;
//    int m_rear;
//public:
//    Status initQueue();
//    Status enQueue(int data);
//    Status deQueue();
//    Status showQueue();
//
//    //private:
//    //    int* arr;
//    //    int front, rear, size, capacity;
//    //
//    //public:
//    //    CircularQueue(int cap) {
//    //        capacity = cap;
//    //        arr = new int[capacity];
//    //        front = -1;
//    //        rear = -1;
//    //        size = 0;
//    //    }
//    //
//    //    // 入队 (Enqueue)
//    //    void enqueue(int data) {
//    //        if ((rear + 1) % capacity == front) {
//    //            // 队列已满
//    //            return;
//    //        }
//    //        if (size == 0) {
//    //            front = rear = 0;
//    //        }
//    //        else {
//    //            rear = (rear + 1) % capacity;
//    //        }
//    //        arr[rear] = data;
//    //        size++;
//    //    }
//    //
//    //    // 出队 (Dequeue)
//    //    int dequeue() {
//    //        if (size == 0) {
//    //            // 队列为空
//    //            return -1;
//    //        }
//    //        int temp = arr[front];
//    //        front = (front + 1) % capacity;
//    //        size--;
//    //        return temp;
//    //    }
//};