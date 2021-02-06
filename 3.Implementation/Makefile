PROJECT_NAME = arya_calc

# Output directory
BUILD = build

# All source code files
SRC = main.c\
src/add.c\
src/subtract.c\
src/multiply.c\
src/divide.c\
src/modulus.c\
src/exponential.c\
src/factorial.c\

# All test source files
TEST_SRC = src/add.c\
src/subtract.c\
src/multiply.c\
src/divide.c\
src/modulus.c\
src/exponential.c\
src/factorial.c\
test/test_arya_calculator.c

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

INC    = -Iinc

PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test all

all: $(SRC) $(BUILD)
    gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).out

# Call `make run` to run the application
run: $(PROJECT_NAME)
    ./$(PROJECT_OUTPUT).out

# Build and run the unit tests
test:$(BUILD)
    gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) -lcunit
    ./$(TEST_OUTPUT)


clean:
    rm -rf $(BUILD)

# Create new build folder if not present
$(BUILD):
    mkdir build
