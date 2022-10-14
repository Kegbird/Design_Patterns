# Decorator pattern

Decorator pattern can be useful when you would like to augment the functionalities provided by a function, without changing its default implementation.

In this example, a simple class Logger which allows the users to just log messages through the method LogMessage.
SuperLogger acts as a class wrapper and decorates the default implementation of logger.