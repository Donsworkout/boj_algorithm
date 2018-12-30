################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../boj_10817.cpp \
../boj_10869.cpp \
../boj_10950.cpp \
../boj_10952.cpp \
../boj_1107.cpp \
../boj_11719.cpp \
../boj_11721.cpp \
../boj_1181.cpp \
../boj_1436.cpp \
../boj_2438.cpp \
../boj_2739.cpp \
../boj_2839.cpp \
../boj_4344.cpp \
../boj_9498.cpp \
../hello.cpp \
../quicksort_by_don.cpp \
../별찍기.cpp \
../빠른A+B.cpp \
../숫자의합.cpp 

OBJS += \
./boj_10817.o \
./boj_10869.o \
./boj_10950.o \
./boj_10952.o \
./boj_1107.o \
./boj_11719.o \
./boj_11721.o \
./boj_1181.o \
./boj_1436.o \
./boj_2438.o \
./boj_2739.o \
./boj_2839.o \
./boj_4344.o \
./boj_9498.o \
./hello.o \
./quicksort_by_don.o \
./별찍기.o \
./빠른A+B.o \
./숫자의합.o 

CPP_DEPS += \
./boj_10817.d \
./boj_10869.d \
./boj_10950.d \
./boj_10952.d \
./boj_1107.d \
./boj_11719.d \
./boj_11721.d \
./boj_1181.d \
./boj_1436.d \
./boj_2438.d \
./boj_2739.d \
./boj_2839.d \
./boj_4344.d \
./boj_9498.d \
./hello.d \
./quicksort_by_don.d \
./별찍기.d \
./빠른A+B.d \
./숫자의합.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


