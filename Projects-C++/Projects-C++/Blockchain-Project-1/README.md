
# Blockchain Implementation

This is a simple implementation of a blockchain using C programming language. It demonstrates the basic concepts of a blockchain, including adding blocks, verifying the chain integrity, altering blocks, and detecting attempts to tamper with the chain. This project serves as an educational tool to understand the underlying principles of blockchain technology.

## Features

- **Add new blocks**: Add new blocks to the blockchain with custom data.
- **Add random blocks**: Add multiple random blocks to the blockchain for testing purposes.
- **Alter blocks**: Modify the data of a specific block in the blockchain to observe the effect on the chain integrity.
- **Print blockchain**: Print the entire blockchain, including block data, hash values, and block links.
- **Verify chain integrity**: Verify the integrity of the blockchain by checking the hash values of each block against the previous block's hash.
- **Detect tampering**: Attempt to tamper with the blockchain by modifying block data and hash values, and observe the detection mechanism.

## Prerequisites

- GCC compiler
- OpenSSL library (for SHA-256 hashing)

## Building and Running

1. Install the OpenSSL library if not already installed:

   - On Ubuntu/Debian-based systems:
     ```
     sudo apt-get install libssl-dev
     ```

   - On Red Hat/CentOS-based systems:
     ```
     sudo yum install openssl-devel
     ```

   - On macOS (with Homebrew):
     ```
     brew install openssl
     ```

2. Compile the program with the OpenSSL library:

   ```
   gcc blockChain2.c -o blockchain -lcrypto
   ```

3. Run the compiled program:

   ```
   ./blockchain
   ```

## Usage

Upon running the program, you will be presented with a menu of options:

1. Add a new block to the blockchain (manual entry)
2. Add multiple random blocks to the blockchain
3. Alter a specific block in the blockchain
4. Print the entire blockchain
5. Verify the integrity of the blockchain
6. Attempt to tamper with the blockchain (for demonstration purposes)

Follow the on-screen prompts to interact with the blockchain.

## Code Structure

The code consists of the following main functions:

- `addBlock(int data)`: Adds a new block to the blockchain with the specified data.
- `verifyChain()`: Verifies the integrity of the blockchain by checking the hash values of each block against the previous block's hash.
- `alterNthBlock(int n, int newData)`: Alters the data of the nth block in the blockchain.
- `hackChain()`: Attempts to tamper with the blockchain by modifying block data and hash values.
- `toString(struct block b)`: Converts a block structure to a byte array for hashing.
- `hashPrinter(unsigned char hash[], int length)`: Prints the hash value in hexadecimal format.
- `hashCompare(unsigned char *str1, unsigned char *str2)`: Compares two hash values for equality.
- `printBlock(struct block *b)`: Prints the details of a single block, including its data, hash value, and link to the next block.
- `printAllChain()`: Prints the details of all blocks in the blockchain.

## Learning Outcomes

By exploring this implementation, you will gain an understanding of the following blockchain concepts:

- Block structure and block linking
- Hash functions and their role in ensuring data integrity
- Chain verification and tamper detection mechanisms
- Basic blockchain operations (adding blocks, modifying blocks, printing the chain)

This project serves as a starting point for learning about blockchain technology and can be extended or modified to incorporate additional features or explore more advanced concepts.

## Contributing

Contributions are welcome! If you find any issues or have suggestions for improvements, please open an issue or submit a pull request. Additionally, you can enhance the project by implementing new features or optimizations.

## License

This project is licensed under the [MIT License](LICENSE).



