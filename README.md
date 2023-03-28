                                        # ft_printf
                                        
The project's goal is to implement the libc's printf() function. The ft printf() prototype should be: int ft printf(const char *,...);

                                        # Variadic functions
Variadic functions (or functions with variable number of arguments) in C are functions that can take a variable number of arguments. The number and type of arguments are specified when defining the function using three dots ("...") after the last fixed argument. The C standard library provides several variadic functions, such as printf(), scanf(), fprintf(), fscanf(), etc. These functions are very useful because they allow you to process input/output in a flexible way without having to specify a fixed number of arguments each time

                                        # va_list va_arg va_start va_end
                                        
va_list: is a type that is used to declare a list of variadic arguments.
va_start: is a macro that initializes a list of variadic arguments.
va_arg: is a macro that returns the next argument in the list of variadic arguments with a given type.
va_end: is a macro that cleans up the variadic argument list.
