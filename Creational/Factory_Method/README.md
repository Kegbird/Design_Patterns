# Factory method

Factory method can be used when:

- You have to provide an interface to build many objects, but you still don't know how many classes you will need.
- You want to specialize a class to build objects according to a given parameter.
- You want to isolate the creation logic of your objects.

In this silly example there is an AnimalFactory which allows to create a limited set of animals: Cats, Dogs and Chinchillas.
To create an animal, you need to use the factory object and provide to it an enum value and according to it, the factory will provide a specific animal; the client can just provide the name and a type, the creation logic is hidden by the factory class.
