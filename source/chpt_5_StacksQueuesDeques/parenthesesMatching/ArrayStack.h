#pragma once

template <typename E> class ArrayStack {
public:
  ArrayStack(int capacity = DEFAULT_CAPACITY);
  int size() const;
  bool empty() const;
  const E &top() const;
  void push(const E &element);
  void pop();

private:
  enum { DEFAULT_CAPACITY = 100 };
  E *m_stack;
  int m_capacity;
  int m_topIndex;
};

template <typename E>
ArrayStack<E>::ArrayStack(int capacity)
    : m_stack(new E[capacity]), m_capacity(capacity), m_topIndex(-1) {}

template <typename E>
int ArrayStack<E>::size() const { 
  return (m_topIndex + 1);
}

template <typename E>
bool ArrayStack<E>::empty() const {
  return (m_topIndex < 0);
}

template <typename E>
const E &ArrayStack<E>::top() const {
  if (empty()) {
    throw "Top of empty stack";
  }
  return m_stack[m_topIndex];
}

template <typename E>
void ArrayStack<E>::push(const E &element) {
    if (size() == m_capacity) {
        throw "Stack full";
    }
    m_stack[++m_topIndex] = element;
}

template <typename E>
void ArrayStack<E>::pop() {
    if (empty()) {
        throw "Pop for empty stack";
    }
    m_topIndex--;
}
