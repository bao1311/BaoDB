#include <iostream>
int main (int argc, char *argv[]) {
  InputBuffer* input_buffer = new_input_buffer();
  
  while (true) {
    print_prompt();
    read_input(input_buffer);

    if (input_buffer->buffer == ".exit") {
      close_input_buffer(input_buffer);
      exit(EXIT_SUCCESS);
    }
    else {
      std::cout << "Can't recognize the commands\n" << input_buffer->buffer;
    }
  }
  
  return 0;
}
