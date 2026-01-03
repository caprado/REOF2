void func_0011eb08() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0011eb08: addiu $sp, $sp, -0x30
    v0 = (unsigned)a0 >> 0xa;                                   // 0x0011eb0c: srl $v0, $a0, 0xa
    s1 = v0 << 6;                                               // 0x0011eb18: sll $s1, $v0, 6
    if (a0 < 0) goto label_0x11eb34;                            // 0x0011eb1c: bltz $a0, 0x11eb34
    v1 = *(int32_t*)((s1) + 8);                                 // 0x0011eb24: lw $v1, 8($s1)
    v0 = a0 & 0x3ff;                                            // 0x0011eb28: andi $v0, $a0, 0x3ff
    if (v0 == v1) goto label_0x11eb3c;                          // 0x0011eb2c: beql $v0, $v1, 0x11eb3c
    v0 = *(int32_t*)((s1) + 0xc);                               // 0x0011eb30: lw $v0, 0xc($s1)
label_0x11eb34:
    goto label_0x11eb60;                                        // 0x0011eb34: b 0x11eb60
    v0 = -1;                                                    // 0x0011eb38: addiu $v0, $zero, -1
label_0x11eb3c:
    v0 = v0 & 1;                                                // 0x0011eb3c: andi $v0, $v0, 1
    if (v0 == 0) goto label_0x11eb5c;                           // 0x0011eb40: beqz $v0, 0x11eb5c
    func_0011e460();  // 11e460                                // 0x0011eb48: jal 0x11e460
    /* nop */                                                   // 0x0011eb4c: nop 
label_0x11eb5c:
label_0x11eb60:
    return;                                                     // 0x0011eb6c: jr $ra
    sp = sp + 0x30;                                             // 0x0011eb70: addiu $sp, $sp, 0x30
}