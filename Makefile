CFLAGS = -Wall -Wno-array-bounds -pipe -O3 -mpopcnt -D_CRT_SECURE_NO_WARNINGS
opt = -DSYZYGY -DTEST -DCPUS=4
LDFLAGS = -lstdc++

objects = crafty.o

all: crafty

crafty.o: crafty.c
	gcc $(CFLAGS) $(opt) -DWINDOWS -c crafty.c -o crafty.o

crafty: $(objects)
	gcc $(LDFLAGS) -o crafty $(objects) -lm

clean:
	del /Q *.o crafty.exe 2>NUL || rm -f *.o crafty.exe
	rm -f log.* game.* 2>NUL || true
	rm -rf prof 2>NUL || true
	rm -rf *.gcda 2>NUL || true
.s.o:
	$(AS) $(AFLAGS) -o $*.o $*.s