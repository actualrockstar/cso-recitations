TARGET:=e1 e2

all: $(TARGET)

e1: e1.c
	gcc $^ -o $@

e2: e2.c e2_test.c
	gcc $^ -o $@

clean:
	rm -f $(TARGET)
