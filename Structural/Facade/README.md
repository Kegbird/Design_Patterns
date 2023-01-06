# Facade pattern

The facade pattern can be useful when you want to provide a simple common interface to a more complex subsystem of objects and classes, 
hiding all their relationships and providing a simple way to exploit them.

In this example, there is a simple calculator which can add, subtract, multiply and divide the given numbers: the Calculator class (a Singleton) provides 4 methods to perform calculus, avoiding the user to use/interact directly with the subsystem (SumOperator, SubtractionOperator, etc.) and simplifying the final code architecture.