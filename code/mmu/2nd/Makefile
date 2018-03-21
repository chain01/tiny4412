
PREFIX	 =  .
#EXEC_PREFIX = /usr/local/arm/arm-none-linux-gnueabi/bin/arm-none-linux-gnueabi-
EXEC_PREFIX = arm-linux-
TARGET = test
VECTOR = vector

Q	= 

AS	= $(EXEC_PREFIX)as
LD	= $(EXEC_PREFIX)ld
CC	= $(EXEC_PREFIX)gcc
OBJCOPY = $(EXEC_PREFIX)objcopy

RM	= rm -f

AS_FLAGS	= -o
C_FLAGS		= -c -o

all: $(TARGET) 
	$(Q)$(OBJCOPY) -I elf32-littlearm -O binary $(TARGET) $(PREFIX)/$(TARGET:=.bin)	

$(TARGET):$(TARGET:=.o)
	$(Q)$(LD) -Ttext=0x70003000 $< -o $@

%.o:%.S
	$(Q)$(AS) $(AS_FLAGS) $@ $<
%.o:%.c
	$(Q)$(CC) $(C_FLAGS) $@ $<

.PHONY:clean
clean:
	$(Q)$(RM) $(PREFIX)/$(TARGET:=.bin) $(PREFIX)/$(VECTOR:=.bin) $(TARGET:=.o) $(VECTOR:=.o) $(TARGET) $(VECTOR) *~



