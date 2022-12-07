# Flyweight pattern

This design pattern relies on the concept of flyweights objects. A flyweight object is an object that can be used in multiple part of an application, simultaneosly, indipendently and
indinstinguishably.
Each flyweight object can operate in any context, without prior knowledge of it.
Each flyweight object manages two state: an intrisic and an extrinsic one.
The intrisic state stores information that are indipendent from the execution context, while the extrinsic state varies with the context.

Flyweight pattern comes useful when you want to share the same concept of an object to your entire application, avoiding to create it multiple times when it needs.
It allows us to have a better control over the memory, avoiding memory memory consumption issues.

Flyweight pattern can be used when:

- Your application relies on a large amount of objects (many of them represent the same concept).
- Many of them don't need to be identify.
- Memory costs are so high to impact significatively the performance of your application.
