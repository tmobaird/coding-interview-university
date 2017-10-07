# C Programming Practice

This directory is for all C programming practice problems and examples.

### Setting up Development Environment

The development environment for this part of the project uses the `gcc` docker image on DockerHub. This makes it incredibly easy to spin up a Debian linux environment with a working gcc installed and ready for use.

To set up your environment, do the following:

1. Install and configure Docker
2. Pull the gcc docker image: `docker pull gcc`
    - This will take a minute or so to download.
3. Spin up a new docker container with this image and mount this directory to the container as a volume: **`docker run --rm -it -v path/to/c/directory:/workspace/ gcc`**. This will connect this directory on your host machine to the container so you can make edits in your favorite editor and run the same updated code in the container.
4. `cd` into `/workspace` and you should now see all your project's files!
5. To test that everything is working, try compiling a C program file with a command like this: `gcc -o <executable-name> <program-path-and-name>` and running that compiled program with `./<executable-name>`.
    - ex. `gcc -o hello hello.c` to compile and `./hello` to run.

Happy C Programming!
