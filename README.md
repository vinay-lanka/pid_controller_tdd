# PID-App

# PID App v1 Badges
[![PID App Tests and CodeCov Report](https://github.com/vinay-lanka/pid_controller_tdd/actions/workflows/test.yaml/badge.svg)](https://github.com/vinay-lanka/pid_controller_tdd/actions/workflows/test.yaml)

[![codecov](https://codecov.io/gh/vinay-lanka/pid_controller_tdd/graph/badge.svg?token=ET5Qyw4FpP)](https://codecov.io/gh/vinay-lanka/pid_controller_tdd)

[![License](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE)


## Project brief

Test Driven Development Exercise for ENPM808X. Implementation of a PID controller using test driven and pair programming methodologies.

Part 1 - 
- Driver: Vinay Lanka (120417665) (vlanka@umd.edu)
- Navigator: Ishaan Parikh (119135891) (Ishaanp@umd.edu)


### Setup via command line

Ensure you're in the project's working directory. <br>
Make sure doxygen is installed or install it with your package manager.

```bash
# Create the make files using cmake
$ cmake -S ./ -B build/

# If building with cmake
$ cmake --build build/

#If you want to generate the compile_json file with bear
$ bear -- cmake --build build/ --clean-first

#To clean and start over
$ rm -rf build/
```

### To generate and view docs

Ensure you're in the project's working directory.

```bash
$ cmake --build ./build --target docs
```

To view docs <br>

```bash
$ open ./docs/html/index.html
```


### Running the Program Executables

Ensure you're in the project's working directory.
To execute the program, execute the following:
``` bash
$ ./build/app/pid-app
```

### Runnning Unit Tests

Ensure you're in the project's working directory.
To run unit tests manually, run:
``` bash
# Manually run the unit tests:
$ ctest --test-dir build/
```

### Building for Test Coverage

Ensure you're in the project's working directory.
To check for test coverage locally:
```bash
# If you don't have gcovr or lcov installed, run:
  sudo apt-get install gcovr lcov
# Set the build type to Debug and WANT_COVERAGE=ON:
  cmake -D WANT_COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug -S ./ -B build/
# Do a clean compile, run unit test, and generate the covereage report:
  cmake --build build/ --clean-first --target all test_coverage
# Open a web browser to browse the test coverage report:
  open build/test_coverage/index.html
```
Running these commands generates a `index.html` page in the `build/test_coverage` sub-directory that can be viewed on a local web browser.

You can also get code coverage report for the *pid-app* target:
``` bash
# Do another clean compile, run shell-app, and generate its covereage report:
  cmake --build build/ --clean-first --target all app_coverage
# Open a web browser to browse the test coverage report:
  open build/app_coverage/index.html
```

This generates a `index.html` page in the `build/app_coverage` sub-directory that can be viewed locally in a web browser.


### Coding Style adherence and Code Analysis

Please check the outputs of cppcheck and cpplint in the ./results directory.