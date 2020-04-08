# Docker build script for clara

FROM ubuntu:16.04
MAINTAINER Ivan Radiček <radicek@forsyte.at>


# Update and install required software
RUN apt-get -y update
RUN apt-get -y install python-pip     
RUN apt-get -y install gcc
RUN apt-get -y install make
RUN apt-get -y install cython
RUN apt-get -y install lp-solve
RUN apt-get -y install git
RUN apt-get -y install liblpsolve55-dev 
RUN apt-get -y install vim

RUN apt-get -y install python3
RUN apt-get -y install python3-pip 

# Install clara
WORKDIR /root/
# RUN git clone "https://github.com/iradicek/clara"
RUN mkdir clara
ADD . clara/
WORKDIR /root/clara
RUN make install

# Add new user
RUN useradd clara

# Copy examples
RUN mkdir /home/clara
RUN mkdir /home/clara/examples
ADD examples/* /home/clara/examples/
RUN mkdir /home/clara/demo
ADD demo/* /home/clara/demo/


# RUN mkdir /home/clara/TestSuite
# ADD TestSuite1.0/* /home/clara/TestSuite/

RUN chown -R clara:clara /home/clara

ARG buildtime_variable=/usr/lib/lp_solve/ 
ENV LD_LIBRARY_PATH=$buildtime_variable 

# RUN mkdir ~/examples
# ADD examples/* ~/examples/
# RUN chown clara:clara /


# Change user & working directory
USER clara
WORKDIR /home/clara

