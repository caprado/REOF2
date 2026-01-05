void func_00179ee8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00179ee8: addiu $sp, $sp, -0x20
    s0 = a1 & 0xff;                                             // 0x00179ef0: andi $s0, $a1, 0xff
    func_00179a18();  // 179a18                                // 0x00179f04: jal 0x179a18
    if (s1 == 0) goto label_0x179f3c;                           // 0x00179f14: beqz $s1, 0x179f3c
    func_0017a258();  // 17a258                                // 0x00179f1c: jal 0x17a258
    /* nop */                                                   // 0x00179f20: nop 
    if (v0 == 0) goto label_0x179f40;                           // 0x00179f24: beqz $v0, 0x179f40
    v1 = *(uint8_t*)((s1) + 0x23);                              // 0x00179f2c: lbu $v1, 0x23($s1)
    v0 = 1;                                                     // 0x00179f30: addiu $v0, $zero, 1
    v1 = v1 & 1;                                                // 0x00179f34: andi $v1, $v1, 1
    *(uint32_t*)(s2) = v1;                                      // 0x00179f38: sw $v1, 0($s2)
label_0x179f3c:
label_0x179f40:
    return;                                                     // 0x00179f4c: jr $ra
    sp = sp + 0x20;                                             // 0x00179f50: addiu $sp, $sp, 0x20
}