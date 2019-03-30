# ForSyde Eclipse

This project's goal is to utilize Eclipse's facilities for model-driven engineering for purpose of embedded and cyberphysical systems design in ForSyDe. For more information about ForSyDe visit [ForSyDe page](https://forsyde.github.io/). A special use case is to use this facilities to implement the flow suggested in [An Automated Parallel Simulation Flowfor Heterogeneous Embedded Systems](https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=1&cad=rja&uact=8&ved=2ahUKEwiHv6Kw6anhAhUvwlkKHeWaCP0QFjAAegQIAhAB&url=https%3A%2F%2Fieeexplore.ieee.org%2Fdocument%2F6513466%2F&usg=AOvVaw0yxEJfLf9Yi1igUNDDELRv). Following you can find instructions on how to use the implementation of this flow. The path of this particular project is the "Parallel" folder.

## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes. Part of the code in "Parallel" path is dedicated to making big test cases to test the validity and performance of the implemented flow and therefore is not in a part of the flow. We used [SDF3](http://www.es.ele.tue.nl/sdf3/) as the tool for generating deadlock free sdf graphs. 

### Prerequisites

The suggested flow is implemented with Eclipse's model-driven engineering facilities for [ForSyD-SystemC](https://forsyde.github.io/ForSyDe-SystemC/). Therefore you should obtain a copy of [Eclipse IDE](https://www.eclipse.org/downloads/) on your computer. by installing the Eclipse Modelling Tools there is no need for installing eclipse modelling facilities anymore. Also systemC should be installed on your machine and you should have a copy of ForSyDe-SystemC library. The instructions for doing so can be found [here](https://forsyde.github.io/ForSyDe-SystemC/setup). 

Last, you need to have an implementation of MPI on your machine (openMPI, MPICH, ...). Instructions for installing MPICH on your machine can be found [here](http://mpitutorial.com/tutorials/installing-mpich2/). 

### Installing

We used [ATL]() for Model to Model transformation and [Acceleo]() for Model to Text transformation. We also used [Modisco]()'s XML metamodel therefore it should be installed on Eclipse too. ATL, Acceleo and Modisco can be installed by clicking on "Installing New Software" on "Help" tab in Eclipse. After installing these, you should open *transformation* and *codegenerator* projects from "Parallel" path. If you want to use sdf3 test cases, you should also open *sdf3ToForSyDe*  project.

## Running the tests

The flow is designed such that a CSP will be solved which returns the optimum distribution of processes to processors. then a model to model transformation will return a ForSyDe model for each processing core containig processes which are meant to be processed on that specific core and modifications such as removig and adding signals and adding sender/receiver processes. Then, each of these models will be transformed into c++ source ready to be compiled by Acceleo code generator. 
For test cases, starting from the output of sdf3, the following steps should be taken : 

1. Providing the input of CSP problem 
	* metisparser.py script for metis and pagrid*
	* minizinkparser.py script for minizink* 
1. Providing the inputs of transformation ( the transformation has 2 inputs : 1- the model of the original system 2- output of CSP ) and running the transformation
	* first, we should add ForSyDe metamodel to EMF registry. this can happen by right-clicking(context menu) on forsyde.ecore file located in *plugins/se.kth.ict.forsyde* using ATL perspective in Eclipse 
	* the second input of transformation has the simple format which can be seen in *Parallel/transformation/graphdist10.xml*. For large inputs the xmlparser.py* can be used to transform output of CSP to desired input of transformation.
	* for each processor the transformation should be run giving the the processor id ( starting from 0)
1. transforming each of the models to text using Acceleo by running the Sysgen.mtl module in Acceleo perspective 
## Remaining

Add additional notes about how to deploy this on a live system


