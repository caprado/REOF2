void func_00192920() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = a1 & 0xffff;                                           // 0x00192920: andi $v1, $a1, 0xffff
label_0x192928:
    v0 = *(uint16_t*)((a0) + 0xc6);                             // 0x00192928: lhu $v0, 0xc6($a0)
    if (v0 != v1) goto label_0x192950;                          // 0x0019292c: bne $v0, $v1, 0x192950
    /* nop */                                                   // 0x00192930: nop 
    *(uint32_t*)((a0) + 0xd4) = 0;                              // 0x00192934: sw $zero, 0xd4($a0)
    *(uint32_t*)((a0) + 0xd8) = 0;                              // 0x00192938: sw $zero, 0xd8($a0)
    v0 = *(int32_t*)((a0) + 0xd0);                              // 0x0019293c: lw $v0, 0xd0($a0)
    if (v0 == 0) goto label_0x192950;                           // 0x00192940: beqz $v0, 0x192950
    /* nop */                                                   // 0x00192944: nop 
    goto label_0x192928;                                        // 0x00192948: b 0x192928
label_0x192950:
    v0 = *(int32_t*)((a0) + 0xcc);                              // 0x00192950: lw $v0, 0xcc($a0)
    if (v0 == 0) goto label_0x19298c;                           // 0x00192954: beqz $v0, 0x19298c
    /* nop */                                                   // 0x00192958: nop 
    if (a0 == a1) goto label_0x19298c;                          // 0x0019295c: beq $a0, $a1, 0x19298c
    /* nop */                                                   // 0x00192960: nop 
    goto label_0x192928;                                        // 0x00192964: b 0x192928
label_0x19296c:
    v0 = *(int32_t*)((a0) + 0xcc);                              // 0x0019296c: lw $v0, 0xcc($a0)
    if (v0 == 0) goto label_0x192988;                           // 0x00192970: beqz $v0, 0x192988
    /* nop */                                                   // 0x00192974: nop 
    v0 = *(uint16_t*)((v0) + 0xc6);                             // 0x0019297c: lhu $v0, 0xc6($v0)
    if (v0 == v1) goto label_0x192928;                          // 0x00192980: beq $v0, $v1, 0x192928
    /* nop */                                                   // 0x00192984: nop 
label_0x192988:
    a0 = *(int32_t*)((a0) + 0xc8);                              // 0x00192988: lw $a0, 0xc8($a0)
label_0x19298c:
    if (a0 != a1) goto label_0x19296c;                          // 0x0019298c: bne $a0, $a1, 0x19296c
    /* nop */                                                   // 0x00192990: nop 
    v0 = 1;                                                     // 0x00192994: addiu $v0, $zero, 1
    return;                                                     // 0x00192998: jr $ra
    /* nop */                                                   // 0x0019299c: nop 
}