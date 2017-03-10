#include "push_swap.h"

int			main(int argc, char **argv)
{
	t_stack *stack;

	(argc-- == 1) ? exit(0) : argv++;
	if (argc == 1 && ft_strequ(argv[0], "./push_swap"))
	{
		argv = ft_strsplit(argv[0], ' ');
		argc = 0;
		while (argv && argv[argc])
			argc++;
		(argc == 0) ? ft_printf("Error\n") : (0);
	}
	stack = parse_args(argc, argv);
	if(!stack)
		return (-1);
	ft_print_int_array(stack->stack_a, stack->a_size);
	easy_sort(stack);
	ft_print_int_array(stack->stack_a, stack->a_size);
	printf("Total: %d\n", stack->total_instr);
	// exec_commands();
	free(stack);
	return (0);
}
