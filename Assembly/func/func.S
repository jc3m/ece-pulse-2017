.text
.global func_call

func_call:
pushl %ebp
movl %esp, %ebp
pushl 16(%ebp)
pushl 12(%ebp)
pushl 8(%ebp)

call magic_function
addl $12, %esp
leave
ret
