# Project Title

This project's goal is to utilize Eclipse's facilities for model-driven engineering for purpose of embedded and cyberphysical systems design in ForSyDe. For more information about ForSyDe visit [ForSyDe page](https://forsyde.github.io/). A special use case is to use this facilities to implement the flow suggested in [An Automated Parallel Simulation Flowfor Heterogeneous Embedded Systems](https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=1&cad=rja&uact=8&ved=2ahUKEwiHv6Kw6anhAhUvwlkKHeWaCP0QFjAAegQIAhAB&url=https%3A%2F%2Fieeexplore.ieee.org%2Fdocument%2F6513466%2F&usg=AOvVaw0yxEJfLf9Yi1igUNDDELRv). Following you can find instructions on how to use the implementation of this flow. The path of this particular project is the "Parallel" folder.

## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes. Part of the code in "Parallel" path is dedicated to making big test cases to test the validity and performance of the implemented flow and therefore is not in a part of the flow. We used [SDF3](http://www.es.ele.tue.nl/sdf3/) as the tool for generating deadlock free sdf graphs. 

### Prerequisites

The suggested flow is implemented with Eclipse's model-driven engineering facilities for [ForSyD-SystemC](https://forsyde.github.io/ForSyDe-SystemC/). Therefore you should obtain a copy of [Eclipse IDE](https://www.eclipse.org/downloads/) on your computer. by installing the Eclipse Modelling Tools there is no need for installing eclipse modelling facilities anymore. Also systemC should be installed on your machine and you should have a copy of ForSyDe-SystemC library. The instructions for doing so can be found [here](https://forsyde.github.io/ForSyDe-SystemC/setup). 

Last, you need to have an implementation of MPI on your machine (openMPI, MPICH, ...). Instructions for installing MPICH on your machine can be found [here](http://mpitutorial.com/tutorials/installing-mpich2/). 

### Installing

A step by step series of examples that tell you how to get a development env running

Say what the step will be

```
Give the example
```

And repeat

```
until finished
```

End with an example of getting some data out of the system or using it for a little demo

## Running the tests

Explain how to run the automated tests for this system

### Break down into end to end tests

Explain what these tests test and why

```
Give an example
```

### And coding style tests

Explain what these tests test and why

```
Give an example
```

## Deployment

Add additional notes about how to deploy this on a live system

## Built With

* [Dropwizard](http://www.dropwizard.io/1.0.2/docs/) - The web framework used
* [Maven](https://maven.apache.org/) - Dependency Management
* [ROME](https://rometools.github.io/rome/) - Used to generate RSS Feeds

