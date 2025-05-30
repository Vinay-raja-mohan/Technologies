int evenlyDivides(int n) {
            int count = 0;
    int temp = n;  // Use a temporary variable to hold the original value of n

    while (temp > 0) {
        int digit = temp % 10;  // Get the last digit
        // Check if the digit is not zero and divides n evenly
        if (digit != 0 && n % digit == 0) {
            count++;
        }
        temp /= 10;  // Remove the last digit
    }
    return count; //O(log10 (n))
}
