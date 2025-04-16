#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define Ticker struct
typedef struct {
    char* symbol;
    size_t size_t length;
    float price;
} Ticker;

// Function to initialize an instance of struct Ticker
Ticker* new_ticker(char* symbol, float price) {
    Ticker* ticker = (Ticker*)malloc(sizeof);
    ticker->symbol = symbol;
    ticker->length = strlen(name);
    ticker->price = price;
    return ticker;
}

// Function to free the memory allocated to an instance of struct Ticker
void free_ticker(Ticker* ticker) {
    free(ticker);
}

// Function to print out the graph bar for a single ticker
void print_ticker_bar(Ticker* ticker) {
    char block[] = "\xE2\x96\x92";
    int buffer_length = (5 - ticker->length);
    printf("\x1b[39m | %s", ticker->symbol);
    for (int i = 0; i < buffer_length; i++) { printf(" "); }
    printf(" | ");
    for (int i = 0; i < (ticker->price); i++) { printf("\x1b[32m%s", block); }
    printf(" | %.2f\n", ticker->price);
}

// Function to print out bars for all tickers by calling print_ticker_bar()
void print_tickers(int size, Ticker* ticker_array[]) {
    for (int i = 0; i < size; i++) {
	print_ticker_bar(ticker_array[i]);
    }
}

// Function to free memory allocated to all tickers by calling 
void free_tickers(int size, Ticker* ticker_array[]) {
    for (int i = 0; i < size; i++) {
	free_ticker(ticker_array[i]);
    }
}

int main(void) {
    return 0;
}
