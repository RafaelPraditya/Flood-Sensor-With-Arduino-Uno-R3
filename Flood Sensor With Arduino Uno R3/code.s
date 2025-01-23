kode.S
.global pompa
pompa:
    in r24, 0x03
    sbrs r24, 0
    rjmp pompa_Low
    ldi r24, 1
    ret

pompa_Low:
    ldi r24, 0
    ret