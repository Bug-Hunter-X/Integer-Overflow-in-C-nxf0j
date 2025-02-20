# Integer Overflow in C

This repository demonstrates a simple C program that showcases the potential for integer overflow errors.  Integer overflow occurs when an arithmetic operation produces a result that is too large to be represented within the data type's range. This can lead to unexpected behavior, including program crashes or incorrect calculations. The solution demonstrates using appropriate data types and checking for potential overflow conditions.

## Bug

The original code assigns a value to an integer variable. If this value exceeds the maximum value an integer can hold, it causes an overflow leading to undefined behavior.

## Solution

The solution utilizes a larger integer type (long long) to prevent overflow and demonstrates how to handle possible overflow situations with error checks.