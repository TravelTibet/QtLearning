#include "A.h"

CircularQueue::CircularQueue()
{
	initQueue();
}
CircularQueue::~CircularQueue()
{}
Status CircularQueue::initQueue()
{
	m_pBase = new int[PICTURE_SIZE * CIRCULAR_QUEUE_MAX_SIZE];
	m_front = 0;
	m_rear = 0;
	m_size = 0;
	if (m_pBase == nullptr)
		return INIT_FAILED_STATUS;
	else
		return NORMAL_STATUS;
}
Status CircularQueue::enQueue(int data)
{
	//if ((m_rear+1)%CIRCULAR_QUEUE_MAX_SIZE == m_front)
	if (m_size == CIRCULAR_QUEUE_MAX_SIZE)
	{
		std::cout << "队列容量有限!不可再加！" << std::endl;
		return MAXSIZE_STATUS;
	}
	m_pBase[m_rear] = data;
	m_rear = (m_rear + 1) % CIRCULAR_QUEUE_MAX_SIZE;

	++m_size;
	showQueue();
	return NORMAL_STATUS;

}
Status CircularQueue::deQueue()
{
	if (m_size == 0)
	{
		std::cout << "队列为空!不可出队!" << std::endl;
		return EMPTY_FAILED_STATUS;
	}
	int temp = m_pBase[m_front];
	m_front = (m_front + 1) % CIRCULAR_QUEUE_MAX_SIZE;
	std::cout << temp << "出队！" << std::endl;
	--m_size;
	showQueue();
	return NORMAL_STATUS;
}
Status CircularQueue::showQueue()
{
	if (m_size == 0)
	{
		std::cout << "队列为空！" << std::endl;
		return NORMAL_STATUS;
	}
	int temp = m_front;
	std::cout << "队列内容如下：" << std::endl;
	for (int i = 0; i < m_size; ++i)
	{
		std::cout << m_pBase[temp] << " ";
		temp = (temp + 1) % CIRCULAR_QUEUE_MAX_SIZE;
	}
	std::cout << std::endl;
	return NORMAL_STATUS;
}
