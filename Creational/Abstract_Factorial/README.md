# Abstract factory pattern

The abstract factory pattern can be used when:

- You want to hide the creation and representation of a set of products.
- When you have many classes with a common interface.
- When the usage of the objects you wanna provide is indipendent from the creation process.

This pattern works pretty well combined with a singleton pattern too (factories are singleton).

In this example, you know from the beginning that you need to provide the creation of classes of products: A, B and C; these products are initialized differently and according to the factory which is involved in the creation process.
Eventually, you will need a new way to build A, B and C products: in that case, you will just create a new class wich ineherits from the abstract factory and implement new way to build these products, without changing the interface.
