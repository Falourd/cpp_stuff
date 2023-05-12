FROM debian:latest


ENV LANG=en_US.UTF-8
ENV LANGUAGE=en_US.UTF-8
ENV LC_ALL=en_US.UTF-8

RUN apt-get -y update \
    && apt-get -y upgrade \
    && apt-get -y install \
# Installation de sudo, non present pas defaut
    && apt-get -y install sudo -y \
#installation composant c++ (gcc-10)
    && apt-get install -y build-essential \
#installation du debugger
    && apt-get install -y gdb \
# Installation Git
    && apt-get install -y git \
# Installation CMake
    && apt-get install -y cmake \
# Installation rapidjson
    && apt-get install -y rapidjson-dev \
# Installation expat
    && apt-get install -y expat \
# Installation xsd
    && apt-get install -y xsdcxx \
## Installation du prompt bash avec intégration git
    && git clone https://github.com/Bash-it/bash-it.git ~/.bash_it \
    && ~/.bash_it/install.sh --silent \
## Install curl for .NET
    && apt-get install -y curl \
## Install htop
    && apt-get install -y htop \
## install psql
    && apt-get install -y postgresql \
## installation de la locale en_US.UTF-8 non presente par defaut
    && apt-get install -y locales \
    && sed -i -e "s/# $LANG.*/$LANG UTF-8/" /etc/locale.gen \
    && dpkg-reconfigure --frontend=noninteractive locales
    