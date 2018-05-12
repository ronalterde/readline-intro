.PHONY: all
all: rl_example0 rl_example1

.PHONY: clean
clean:
	rm -f rl_example0
	rm -f rl_example1

rl_example0: rl_example0.c
	gcc -o $@ $< -lreadline

rl_example1: rl_example1.c
	gcc -o $@ $< -lreadline
