# FRP Modules for IoT in Scala

This is a work-in-progress solution for sensor network application
maintainability problems in the form of a Scala embedded domain specific
language (EDSL). We base ourselves on existing solutions such as functional
reactive programming (FRP) and what is known as macro-programming in the domain
of sensor networks: programming a distributed sensor networks application as a
single program using distribution and communication primitives.

## Try it!

### Install [SBT](http://www.scala-sbt.org/)

Please follow the install guide on the official [scala-sbt.org](http://www.scala-sbt.org/release/docs/Getting-Started/Setup.html#installing-sbt) website.

### Compile an example

    git clone https://github.com/Tzbob/scala-iot-modules-for-frp.git
    cd scala-iot-modules-for-frp
    sbt "run-main be.kuleuven.Applications.SimplifiedParkingAppRunner"

The results of this compilation is now present in ```./generated```.
    

## Navigating the codebase

- Examples: ```src/main/scala/be/kuleuven/Applications```
- Core implementation: ```src/main/scala/be/kuleuven/FRP_EMBEDDED```
- Sancus extensions for LMS: ```src/main/scala/be/kuleuven/LMS_extensions```
