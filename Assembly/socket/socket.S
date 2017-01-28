.text
.global create_socket

create_socket:
.LFB2:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$12, %esp
	pushl	$0
	pushl	$1
	pushl	$2
	call	socket
	addl	$0x10, %esp
	leave
	ret