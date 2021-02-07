SRC = unity/unity.c\
src/add.c\
src/divide.c\
src/factorial.c\
src/multiply.c\
src/exponential.c\
src/modulus.c\
src/subtract.c\
test/test_arya_calculator.c\
main.c

INC = -Iunity\
-Iinc\
-Itest

PROJECT_NAME = anagha1.out

BUILD = build

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}


clean:
	rm -rf $(PROJECT_NAME)
