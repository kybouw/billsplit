/*
 * billsplit
 * by Kyle Bouwman
 * 
 * Copyright (C) 2022 Kyle Bouwman
 * 
 * This file is part of billsplit.
 *
 * budg is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * billsplit is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with billsplit. If not, see <https://www.gnu.org/licenses/gpl.html>.
 */

#include <stdio.h>

int main() {

    //testing...
    // printf("Hello, world!\n");

    // how many ways are we splitting the bill
    int numberOfSplits = 1;
    printf("How many ways are we splitting the bill?\n> ");
    scanf("%d", &numberOfSplits);
    printf("Splitting %d ways...\n", numberOfSplits);

    // get the bill total
    int totalBill_pennies = 0;
    float totalBill;
    printf("What is the bill total?\n> ");
    scanf("%f", &totalBill);
    totalBill_pennies = totalBill * 100;
    printf("Bill total is $%.2f\n", totalBill);

    // exit gracefully
    return 0;
}