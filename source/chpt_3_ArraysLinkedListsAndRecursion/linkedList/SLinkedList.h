#pragma once
#include <cstddef>

template <typename E>
class SNode;

template <typename E>
class SLinkedList {
  public:
    SLinkedList() {
        head = NULL;
    }
    ~SLinkedList() {
        while (!empty()) {
          removeFront();
        }
    }

    bool empty() const {
        return head == NULL;
    }
    const E& front() const {
        return head->element;
    }
    void addFront(const E& element) {
        SNode<E>* newNode = new SNode<E>;
        newNode->element = element;
        newNode->next = head;
        head = newNode;
    }
    void removeFront() {
        SNode<E>* frontNode = head;
        head = frontNode->next;
        delete frontNode;
    }

  private:
    SNode<E>* head;
};

template <typename E>
class SNode {
  private:
    E element;
    SNode<E>* next;
    friend class SLinkedList<E>;
};
