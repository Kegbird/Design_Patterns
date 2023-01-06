# Bridge pattern

The bridge pattern can be used when:

- You want to share the implemetion of a class among multiple objects.
- When you would like to extend the class hierarchy, but there are too many subclasses to write.
- You want to separate the abstraction and its implementation.

In this example, the abstraction is represented by the Oven class, which is suited to work with all implementations of Dough. By doing so, we can keep using the same Oven class, ignoring all implementations of Dough.