#ifndef CPP_CYCLICQUEUE_H
#define CPP_CYCLICQUEUE_H

/*
 * ����������� ������� - ��������� ����������� ������� �������,
 * ������� ��������� �� ��������� ������������ ���������� �� ������.
 * ��������, � ��� ���� ����������� �������, � ������� ����� ��������� �������� 6 ���������.
 * ������� ��������� ������������������ ������:
 * push(1)
 * push(2)
 * push(3)
 * push(4)
 * push(5)
 * ������ ������ ������� ����� ��������� ���: [1, 2, 3, 4, 5, ?]
 * ������ ������ ������ 3 ��������:
 * pop()
 * pop()
 * pop()
 * ������ �������� ���:
 * [?, ?, ?, 4, 5, ?]
 * ���� �������� ��� 3 ��������:
 * push(6)
 * push(7)
 * push(8)
 * �� ������ ������ ��������� ���:
 * [7, 8, ?, 4, 5, 6]
 * �� ���� ������ ������ ������������� �, ����� ����, ��� �������� �������� ��� �����, ��� ����������� � ������.
 */
class CyclicQueue {
public:
    CyclicQueue();

    explicit CyclicQueue(int capacity);

    CyclicQueue(const CyclicQueue& other);

    ~CyclicQueue();

    CyclicQueue& operator=(const CyclicQueue& other);

    int size() const;

    void push(int item);

    int pop();

    int front() const;

    void clear();

private:
    int* arr_;
    int capacity_, size_, left_, right_;
};

#endif //CPP_CYCLICQUEUE_H
