# Proxy pattern

The proxy pattern comes handy when you want to simplify (or optimize) the interface of an object 
to its clients, in order to provide an indirect control to it.
In this example, the ImageProxy implements a lazy load of the ConcreteImage attribute, in order to load the effective image only when it is requested (Draw()).
The proxy pattern pattern can be used when: