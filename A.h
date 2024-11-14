//#pragma once
//
//#include <iostream>
//#include <string>
//#define PICTURE_SIZE (sizeof(int))
//#define CIRCULAR_QUEUE_MAX_SIZE 3
//
//typedef enum Status
//{
//    //��ֵ���ǣ�
//    TRUE_STATUS = 3,
//
//    //��ֵ����
//    FALSE_STATUS = 2,
//
//    //����
//    NORMAL_STATUS = 1,
//
//    //�쳣
//    ERROR_STATUS = 0,
//
//    //���г�ʼ��ʧ��
//    INIT_FAILED_STATUS = -1,
//
//    //�������������ʧ��
//    MAXSIZE_STATUS = -2,
//
//    //����Ϊ�գ�����ʧ��
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
//    //    // ��� (Enqueue)
//    //    void enqueue(int data) {
//    //        if ((rear + 1) % capacity == front) {
//    //            // ��������
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
//    //    // ���� (Dequeue)
//    //    int dequeue() {
//    //        if (size == 0) {
//    //            // ����Ϊ��
//    //            return -1;
//    //        }
//    //        int temp = arr[front];
//    //        front = (front + 1) % capacity;
//    //        size--;
//    //        return temp;
//    //    }
//};