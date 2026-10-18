# Experiment No. 4 — Pizza Parlor Using Queue with Linked List

## Problem Statement

A pizza parlor accepts a maximum of `M` orders. Orders are served on a **First Come, First Served (FCFS)** basis. A queue is commonly used in computer programming to process jobs in the order they arrive.

Write a C++ program to simulate a pizza parlor order queue using a linked list. Implement functions to add orders to the queue and delete orders from the queue. The queue must not exceed the maximum capacity `M`.

## Aim

To implement a queue using a linked list and simulate first-come, first-served processing of pizza orders.

## Objectives

- Define a node structure to store order information.
- Implement the enqueue operation to add an order at the rear.
- Implement the dequeue operation to remove an order from the front.
- Display all current orders in the queue.
- Ensure the queue does not exceed the maximum limit `M`.
- Create a menu-driven program for interactive operations.

## Theory

A **queue** is a linear data structure that follows the **FIFO (First In, First Out)** principle. The order inserted first is removed first.

In a pizza parlor, orders are prepared and served in the order they are received.

A linked list consists of nodes containing data and a pointer to the next node. It allows dynamic memory allocation for queue elements.

### Queue Operations

1. **Enqueue:** Adds a new order at the rear of the queue.
2. **Dequeue:** Removes the oldest order from the front of the queue.
3. **Display:** Shows all orders currently waiting.
4. **Overflow Check:** Prevents adding orders when the maximum capacity `M` is reached.
5. **Underflow Check:** Prevents deleting orders when the queue is empty.

## Associated Tasks

1. Create a node structure for storing order details.
2. Implement enqueue and dequeue operations using a linked list.
3. Display the current queue of orders.
4. Enforce the maximum queue capacity.
5. Create a menu-driven program to manage pizza orders.

## Concepts Used

- Queue Data Structure
- FIFO Principle
- Linked List
- Dynamic Memory Allocation
- Enqueue and Dequeue
- Pointers
- Menu-Driven Programming

## Example

Assume the maximum number of orders is `M = 5`.

- Add Order1, Order2, Order3, Order4, and Order5.
- Remove Order1 from the front.
- Add Order6 at the rear.
- The queue now contains Order2, Order3, Order4, Order5, and Order6.

## Applications

- Pizza order management
- Operating system job scheduling
- Customer service systems
- Printer job queues
- Ticket booking systems

## Conclusion

Thus, a queue using a linked list is implemented successfully to simulate pizza order management. The FIFO principle ensures that orders are served in the order they arrive, while the maximum capacity prevents the queue from exceeding the specified limit.

